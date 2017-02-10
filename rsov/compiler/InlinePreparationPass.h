/*
 * Copyright 2016, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RS2SPIRV_INLINE_PREPARATION_PASS_H
#define RS2SPIRV_INLINE_PREPARATION_PASS_H

namespace llvm {
class ModulePass;
} // namespace llvm

namespace bcinfo {
class MetadataExtractor;
} // namespace bcinfo

namespace rs2spirv {

llvm::ModulePass *
createInlinePreparationPass(bcinfo::MetadataExtractor &Extractor);

} // namespace rs2spirv

#endif
