#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMoveNextPos__FPfPffPf
// Address: 0x15bf80 - 0x15c05c
void CalcMoveNextPos__FPfPffPf_0x15bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMoveNextPos__FPfPffPf_0x15bf80");
#endif

    switch (ctx->pc) {
        case 0x15bfc4u: goto label_15bfc4;
        case 0x15bfdcu: goto label_15bfdc;
        case 0x15bff4u: goto label_15bff4;
        case 0x15c00cu: goto label_15c00c;
        case 0x15c024u: goto label_15c024;
        case 0x15c038u: goto label_15c038;
        default: break;
    }

    ctx->pc = 0x15bf80u;

    // 0x15bf80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15bf84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bf88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15bf8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15bf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15bf90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15bf94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15bf94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15bf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15bf9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15bf9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15bfa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15bfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15bfa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15bfac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15bfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfb0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x15bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x15bfb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15bfb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15bfb8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x15bfbc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x15BFBCu;
    SET_GPR_U32(ctx, 31, 0x15BFC4u);
    ctx->pc = 0x15BFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFBCu;
            // 0x15bfc0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFC4u; }
        if (ctx->pc != 0x15BFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFC4u; }
        if (ctx->pc != 0x15BFC4u) { return; }
    }
    ctx->pc = 0x15BFC4u;
label_15bfc4:
    // 0x15bfc4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15bfc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bfcc: 0x27b0006c  addiu       $s0, $sp, 0x6C
    ctx->pc = 0x15bfccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x15bfd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15bfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfd4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x15BFD4u;
    SET_GPR_U32(ctx, 31, 0x15BFDCu);
    ctx->pc = 0x15BFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFD4u;
            // 0x15bfd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFDCu; }
        if (ctx->pc != 0x15BFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFDCu; }
        if (ctx->pc != 0x15BFDCu) { return; }
    }
    ctx->pc = 0x15BFDCu;
label_15bfdc:
    // 0x15bfdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bfe0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15bfe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15bfe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15bfe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15bfec: 0xc041c4a  jal         func_107128
    ctx->pc = 0x15BFECu;
    SET_GPR_U32(ctx, 31, 0x15BFF4u);
    ctx->pc = 0x15BFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFECu;
            // 0x15bff0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFF4u; }
        if (ctx->pc != 0x15BFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFF4u; }
        if (ctx->pc != 0x15BFF4u) { return; }
    }
    ctx->pc = 0x15BFF4u;
label_15bff4:
    // 0x15bff4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bffc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15c000: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c004: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x15C004u;
    SET_GPR_U32(ctx, 31, 0x15C00Cu);
    ctx->pc = 0x15C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C004u;
            // 0x15c008: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C00Cu; }
        if (ctx->pc != 0x15C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C00Cu; }
        if (ctx->pc != 0x15C00Cu) { return; }
    }
    ctx->pc = 0x15C00Cu;
label_15c00c:
    // 0x15c00c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15c010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c014: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15c014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15c018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c01c: 0xc056fb8  jal         func_15BEE0
    ctx->pc = 0x15C01Cu;
    SET_GPR_U32(ctx, 31, 0x15C024u);
    ctx->pc = 0x15C020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C01Cu;
            // 0x15c020: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BEE0u;
    if (runtime->hasFunction(0x15BEE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C024u; }
        if (ctx->pc != 0x15C024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPosInOutForArea__FPfPfPf_0x15bee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C024u; }
        if (ctx->pc != 0x15C024u) { return; }
    }
    ctx->pc = 0x15C024u;
label_15c024:
    // 0x15c024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C024u;
    {
        const bool branch_taken_0x15c024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C024u;
            // 0x15c028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c024) {
            ctx->pc = 0x15C03Cu;
            goto label_15c03c;
        }
    }
    ctx->pc = 0x15C02Cu;
    // 0x15c02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c030: 0xc041c5c  jal         func_107170
    ctx->pc = 0x15C030u;
    SET_GPR_U32(ctx, 31, 0x15C038u);
    ctx->pc = 0x15C034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C030u;
            // 0x15c034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C038u; }
        if (ctx->pc != 0x15C038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C038u; }
        if (ctx->pc != 0x15C038u) { return; }
    }
    ctx->pc = 0x15C038u;
label_15c038:
    // 0x15c038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c03c:
    // 0x15c03c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c040: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15c044: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15c044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c048: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15c048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c04c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15c04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15c050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c054: 0x3e00008  jr          $ra
    ctx->pc = 0x15C054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C054u;
            // 0x15c058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C05Cu;
}
