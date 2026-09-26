#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DecodePassword__FPcPUciPUci
// Address: 0x31d340 - 0x31d450
void DecodePassword__FPcPUciPUci_0x31d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DecodePassword__FPcPUciPUci_0x31d340");
#endif

    switch (ctx->pc) {
        case 0x31d370u: goto label_31d370;
        case 0x31d3f0u: goto label_31d3f0;
        case 0x31d420u: goto label_31d420;
        default: break;
    }

    ctx->pc = 0x31d340u;

    // 0x31d340: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31d344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31d348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d350: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x31d350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x31d354: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x31d354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x31d358: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x31d358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x31d35c: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x31d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x31d360: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x31d360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
    // 0x31d364: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x31d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d368: 0xc04a422  jal         func_129088
    ctx->pc = 0x31D368u;
    SET_GPR_U32(ctx, 31, 0x31D370u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D370u; }
        if (ctx->pc != 0x31D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D370u; }
        if (ctx->pc != 0x31D370u) { return; }
    }
    ctx->pc = 0x31D370u;
label_31d370:
    // 0x31d370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d374: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31d378: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x31d378u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31d37c: 0x0  nop
    ctx->pc = 0x31d37cu;
    // NOP
    // 0x31d380: 0x0  nop
    ctx->pc = 0x31d380u;
    // NOP
    // 0x31d384: 0x1010  mfhi        $v0
    ctx->pc = 0x31d384u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31d388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D388u;
    {
        const bool branch_taken_0x31d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d388) {
            ctx->pc = 0x31D39Cu;
            goto label_31d39c;
        }
    }
    ctx->pc = 0x31D390u;
    // 0x31d390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d394: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31D394u;
    {
        const bool branch_taken_0x31d394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d394) {
            ctx->pc = 0x31D438u;
            goto label_31d438;
        }
    }
    ctx->pc = 0x31D39Cu;
label_31d39c:
    // 0x31d39c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x31d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d3a0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31d3a4: 0x3c022e8b  lui         $v0, 0x2E8B
    ctx->pc = 0x31d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11915 << 16));
    // 0x31d3a8: 0x3442a2e9  ori         $v0, $v0, 0xA2E9
    ctx->pc = 0x31d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41705);
    // 0x31d3ac: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x31d3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31d3b0: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x31d3b4: 0x0  nop
    ctx->pc = 0x31d3b4u;
    // NOP
    // 0x31d3b8: 0x1010  mfhi        $v0
    ctx->pc = 0x31d3b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31d3bc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31d3bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31d3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d3c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31d3c8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x31d3c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d3cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D3CCu;
    {
        const bool branch_taken_0x31d3cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d3cc) {
            ctx->pc = 0x31D3E0u;
            goto label_31d3e0;
        }
    }
    ctx->pc = 0x31D3D4u;
    // 0x31d3d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31D3D8u;
    {
        const bool branch_taken_0x31d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d3d8) {
            ctx->pc = 0x31D438u;
            goto label_31d438;
        }
    }
    ctx->pc = 0x31D3E0u;
label_31d3e0:
    // 0x31d3e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x31d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d3e4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x31d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d3e8: 0xc0c7328  jal         func_31CCA0
    ctx->pc = 0x31D3E8u;
    SET_GPR_U32(ctx, 31, 0x31D3F0u);
    ctx->pc = 0x31CCA0u;
    if (runtime->hasFunction(0x31CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x31CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D3F0u; }
        if (ctx->pc != 0x31D3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertTxtToBin__FPcPUc_0x31cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D3F0u; }
        if (ctx->pc != 0x31D3F0u) { return; }
    }
    ctx->pc = 0x31D3F0u;
label_31d3f0:
    // 0x31d3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31d3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3f4: 0x1e200004  bgtz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D3F4u;
    {
        const bool branch_taken_0x31d3f4 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x31d3f4) {
            ctx->pc = 0x31D408u;
            goto label_31d408;
        }
    }
    ctx->pc = 0x31D3FCu;
    // 0x31d3fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d400: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31D400u;
    {
        const bool branch_taken_0x31d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d400) {
            ctx->pc = 0x31D438u;
            goto label_31d438;
        }
    }
    ctx->pc = 0x31D408u;
label_31d408:
    // 0x31d408: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x31d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d40c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x31d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d410: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x31d410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d414: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x31d414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d418: 0xc0c7418  jal         func_31D060
    ctx->pc = 0x31D418u;
    SET_GPR_U32(ctx, 31, 0x31D420u);
    ctx->pc = 0x31D060u;
    if (runtime->hasFunction(0x31D060u)) {
        auto targetFn = runtime->lookupFunction(0x31D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D420u; }
        if (ctx->pc != 0x31D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DecodeBinData__FPUciPUci_0x31d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D420u; }
        if (ctx->pc != 0x31D420u) { return; }
    }
    ctx->pc = 0x31D420u;
label_31d420:
    // 0x31d420: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D420u;
    {
        const bool branch_taken_0x31d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d420) {
            ctx->pc = 0x31D434u;
            goto label_31d434;
        }
    }
    ctx->pc = 0x31D428u;
    // 0x31d428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d42c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D42Cu;
    {
        const bool branch_taken_0x31d42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d42c) {
            ctx->pc = 0x31D438u;
            goto label_31d438;
        }
    }
    ctx->pc = 0x31D434u;
label_31d434:
    // 0x31d434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d438:
    // 0x31d438: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31d438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d444: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x31d444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d448: 0x3e00008  jr          $ra
    ctx->pc = 0x31D448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D450u;
}
