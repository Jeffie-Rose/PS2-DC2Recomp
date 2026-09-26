#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_WORLD_ROT__FP12RS_STACKDATAi
// Address: 0x2e6860 - 0x2e6930
void ps2__SPT_WORLD_ROT__FP12RS_STACKDATAi_0x2e6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_WORLD_ROT__FP12RS_STACKDATAi_0x2e6860");
#endif

    switch (ctx->pc) {
        case 0x2e688cu: goto label_2e688c;
        case 0x2e689cu: goto label_2e689c;
        case 0x2e68b0u: goto label_2e68b0;
        case 0x2e68bcu: goto label_2e68bc;
        case 0x2e68c8u: goto label_2e68c8;
        case 0x2e68d0u: goto label_2e68d0;
        case 0x2e68dcu: goto label_2e68dc;
        case 0x2e68f8u: goto label_2e68f8;
        default: break;
    }

    ctx->pc = 0x2e6860u;

    // 0x2e6860: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e6864: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6868: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e686c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6870: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6874: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6878: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e687c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6880: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6884: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6884u;
    SET_GPR_U32(ctx, 31, 0x2E688Cu);
    ctx->pc = 0x2E6888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6884u;
            // 0x2e6888: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E688Cu; }
        if (ctx->pc != 0x2E688Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E688Cu; }
        if (ctx->pc != 0x2E688Cu) { return; }
    }
    ctx->pc = 0x2E688Cu;
label_2e688c:
    // 0x2e688c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6894: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6894u;
    SET_GPR_U32(ctx, 31, 0x2E689Cu);
    ctx->pc = 0x2E6898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6894u;
            // 0x2e6898: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E689Cu; }
        if (ctx->pc != 0x2E689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E689Cu; }
        if (ctx->pc != 0x2E689Cu) { return; }
    }
    ctx->pc = 0x2E689Cu;
label_2e689c:
    // 0x2e689c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2e689cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e68a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E68A0u;
    {
        const bool branch_taken_0x2e68a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E68A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68A0u;
            // 0x2e68a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68a0) {
            ctx->pc = 0x2E68B4u;
            goto label_2e68b4;
        }
    }
    ctx->pc = 0x2E68A8u;
    // 0x2e68a8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E68A8u;
    SET_GPR_U32(ctx, 31, 0x2E68B0u);
    ctx->pc = 0x2E68ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68A8u;
            // 0x2e68ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68B0u; }
        if (ctx->pc != 0x2E68B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68B0u; }
        if (ctx->pc != 0x2E68B0u) { return; }
    }
    ctx->pc = 0x2E68B0u;
label_2e68b0:
    // 0x2e68b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e68b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e68b4:
    // 0x2e68b4: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x2E68B4u;
    SET_GPR_U32(ctx, 31, 0x2E68BCu);
    ctx->pc = 0x2E68B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68B4u;
            // 0x2e68b8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68BCu; }
        if (ctx->pc != 0x2E68BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68BCu; }
        if (ctx->pc != 0x2E68BCu) { return; }
    }
    ctx->pc = 0x2E68BCu;
label_2e68bc:
    // 0x2e68bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e68bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e68c0: 0xc04c10c  jal         func_130430
    ctx->pc = 0x2E68C0u;
    SET_GPR_U32(ctx, 31, 0x2E68C8u);
    ctx->pc = 0x2E68C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68C0u;
            // 0x2e68c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130430u;
    if (runtime->hasFunction(0x130430u)) {
        auto targetFn = runtime->lookupFunction(0x130430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68C8u; }
        if (ctx->pc != 0x2E68C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixY__FPA4_ff_0x130430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68C8u; }
        if (ctx->pc != 0x2E68C8u) { return; }
    }
    ctx->pc = 0x2E68C8u;
label_2e68c8:
    // 0x2e68c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E68C8u;
    {
        const bool branch_taken_0x2e68c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68C8u;
            // 0x2e68cc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68c8) {
            ctx->pc = 0x2E68FCu;
            goto label_2e68fc;
        }
    }
    ctx->pc = 0x2E68D0u;
label_2e68d0:
    // 0x2e68d0: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e68d4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E68D4u;
    SET_GPR_U32(ctx, 31, 0x2E68DCu);
    ctx->pc = 0x2E68D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68D4u;
            // 0x2e68d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68DCu; }
        if (ctx->pc != 0x2E68DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68DCu; }
        if (ctx->pc != 0x2E68DCu) { return; }
    }
    ctx->pc = 0x2E68DCu;
label_2e68dc:
    // 0x2e68dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E68DCu;
    {
        const bool branch_taken_0x2e68dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E68E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68DCu;
            // 0x2e68e0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68dc) {
            ctx->pc = 0x2E68ECu;
            goto label_2e68ec;
        }
    }
    ctx->pc = 0x2E68E4u;
    // 0x2e68e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E68E4u;
    {
        const bool branch_taken_0x2e68e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68E4u;
            // 0x2e68e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68e4) {
            ctx->pc = 0x2E6910u;
            goto label_2e6910;
        }
    }
    ctx->pc = 0x2E68ECu;
label_2e68ec:
    // 0x2e68ec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e68f0: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2E68F0u;
    SET_GPR_U32(ctx, 31, 0x2E68F8u);
    ctx->pc = 0x2E68F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68F0u;
            // 0x2e68f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68F8u; }
        if (ctx->pc != 0x2E68F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68F8u; }
        if (ctx->pc != 0x2E68F8u) { return; }
    }
    ctx->pc = 0x2E68F8u;
label_2e68f8:
    // 0x2e68f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e68f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e68fc:
    // 0x2e68fc: 0x0  nop
    ctx->pc = 0x2e68fcu;
    // NOP
    // 0x2e6900: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6904: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e6904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6908: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E6908u;
    {
        const bool branch_taken_0x2e6908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6908u;
            // 0x2e690c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6908) {
            ctx->pc = 0x2E68D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e68d0;
        }
    }
    ctx->pc = 0x2E6910u;
label_2e6910:
    // 0x2e6910: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6914: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6918: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e691c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e691cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6920: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6928: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6928u;
            // 0x2e692c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6930u;
}
