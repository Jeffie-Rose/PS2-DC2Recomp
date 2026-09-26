#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_JUMP__FP12RS_STACKDATAi
// Address: 0x271010 - 0x271190
void ps2__OBJS_JUMP__FP12RS_STACKDATAi_0x271010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_JUMP__FP12RS_STACKDATAi_0x271010");
#endif

    switch (ctx->pc) {
        case 0x271048u: goto label_271048;
        case 0x27106cu: goto label_27106c;
        case 0x2710d8u: goto label_2710d8;
        case 0x2710e8u: goto label_2710e8;
        case 0x2710f8u: goto label_2710f8;
        case 0x271104u: goto label_271104;
        case 0x271114u: goto label_271114;
        case 0x271124u: goto label_271124;
        case 0x271134u: goto label_271134;
        case 0x271140u: goto label_271140;
        case 0x271158u: goto label_271158;
        case 0x271174u: goto label_271174;
        default: break;
    }

    ctx->pc = 0x271010u;

    // 0x271010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x271010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x271014: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x271014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x271018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x271018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27101c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x271020: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x271020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x271024: 0x10a20039  beq         $a1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x271024u;
    {
        const bool branch_taken_0x271024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x271028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271024u;
            // 0x271028: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271024) {
            ctx->pc = 0x27110Cu;
            goto label_27110c;
        }
    }
    ctx->pc = 0x27102Cu;
    // 0x27102c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271030: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271030u;
    {
        const bool branch_taken_0x271030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x271030) {
            ctx->pc = 0x271040u;
            goto label_271040;
        }
    }
    ctx->pc = 0x271038u;
    // 0x271038: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x271038u;
    {
        const bool branch_taken_0x271038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271038u;
            // 0x27103c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271038) {
            ctx->pc = 0x271148u;
            goto label_271148;
        }
    }
    ctx->pc = 0x271040u;
label_271040:
    // 0x271040: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271040u;
    SET_GPR_U32(ctx, 31, 0x271048u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271048u; }
        if (ctx->pc != 0x271048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271048u; }
        if (ctx->pc != 0x271048u) { return; }
    }
    ctx->pc = 0x271048u;
label_271048:
    // 0x271048: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x271048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27104c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x27104cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x271050: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271050u;
    {
        const bool branch_taken_0x271050 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271050u;
            // 0x271054: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271050) {
            ctx->pc = 0x271060u;
            goto label_271060;
        }
    }
    ctx->pc = 0x271058u;
    // 0x271058: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x271058u;
    {
        const bool branch_taken_0x271058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271058u;
            // 0x27105c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271058) {
            ctx->pc = 0x2710C0u;
            goto label_2710c0;
        }
    }
    ctx->pc = 0x271060u;
label_271060:
    // 0x271060: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x271060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x271064: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271064u;
    {
        const bool branch_taken_0x271064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271064u;
            // 0x271068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271064) {
            ctx->pc = 0x271098u;
            goto label_271098;
        }
    }
    ctx->pc = 0x27106Cu;
label_27106c:
    // 0x27106c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271070: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x271070u;
    {
        const bool branch_taken_0x271070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271070) {
            ctx->pc = 0x2710A4u;
            goto label_2710a4;
        }
    }
    ctx->pc = 0x271078u;
    // 0x271078: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x271078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x27107c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27107Cu;
    {
        const bool branch_taken_0x27107c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27107c) {
            ctx->pc = 0x27108Cu;
            goto label_27108c;
        }
    }
    ctx->pc = 0x271084u;
    // 0x271084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271084u;
    {
        const bool branch_taken_0x271084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271084u;
            // 0x271088: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271084) {
            ctx->pc = 0x271098u;
            goto label_271098;
        }
    }
    ctx->pc = 0x27108Cu;
label_27108c:
    // 0x27108c: 0x0  nop
    ctx->pc = 0x27108cu;
    // NOP
    // 0x271090: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271090u;
    {
        const bool branch_taken_0x271090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271090u;
            // 0x271094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271090) {
            ctx->pc = 0x2710C0u;
            goto label_2710c0;
        }
    }
    ctx->pc = 0x271098u;
label_271098:
    // 0x271098: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x271098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27109c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x27109Cu;
    {
        const bool branch_taken_0x27109c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27109c) {
            ctx->pc = 0x27106Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27106c;
        }
    }
    ctx->pc = 0x2710A4u;
label_2710a4:
    // 0x2710a4: 0x0  nop
    ctx->pc = 0x2710a4u;
    // NOP
    // 0x2710a8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2710A8u;
    {
        const bool branch_taken_0x2710a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2710ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2710A8u;
            // 0x2710ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710a8) {
            ctx->pc = 0x2710B8u;
            goto label_2710b8;
        }
    }
    ctx->pc = 0x2710B0u;
    // 0x2710b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2710B0u;
    {
        const bool branch_taken_0x2710b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710b0) {
            ctx->pc = 0x2710C0u;
            goto label_2710c0;
        }
    }
    ctx->pc = 0x2710B8u;
label_2710b8:
    // 0x2710b8: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x2710b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2710bc: 0x0  nop
    ctx->pc = 0x2710bcu;
    // NOP
label_2710c0:
    // 0x2710c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2710C0u;
    {
        const bool branch_taken_0x2710c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2710C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2710C0u;
            // 0x2710c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710c0) {
            ctx->pc = 0x2710D0u;
            goto label_2710d0;
        }
    }
    ctx->pc = 0x2710C8u;
    // 0x2710c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2710C8u;
    {
        const bool branch_taken_0x2710c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2710C8u;
            // 0x2710cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710c8) {
            ctx->pc = 0x271178u;
            goto label_271178;
        }
    }
    ctx->pc = 0x2710D0u;
label_2710d0:
    // 0x2710d0: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x2710D0u;
    SET_GPR_U32(ctx, 31, 0x2710D8u);
    ctx->pc = 0x2710D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710D0u;
            // 0x2710d4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710D8u; }
        if (ctx->pc != 0x2710D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710D8u; }
        if (ctx->pc != 0x2710D8u) { return; }
    }
    ctx->pc = 0x2710D8u;
label_2710d8:
    // 0x2710d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2710d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2710dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2710e0: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x2710E0u;
    SET_GPR_U32(ctx, 31, 0x2710E8u);
    ctx->pc = 0x2710E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710E0u;
            // 0x2710e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710E8u; }
        if (ctx->pc != 0x2710E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710E8u; }
        if (ctx->pc != 0x2710E8u) { return; }
    }
    ctx->pc = 0x2710E8u;
label_2710e8:
    // 0x2710e8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2710ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2710ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710f0: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x2710F0u;
    SET_GPR_U32(ctx, 31, 0x2710F8u);
    ctx->pc = 0x2710F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710F0u;
            // 0x2710f4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F8u; }
        if (ctx->pc != 0x2710F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F8u; }
        if (ctx->pc != 0x2710F8u) { return; }
    }
    ctx->pc = 0x2710F8u;
label_2710f8:
    // 0x2710f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2710f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2710fc: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x2710FCu;
    SET_GPR_U32(ctx, 31, 0x271104u);
    ctx->pc = 0x271100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2710FCu;
            // 0x271100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271104u; }
        if (ctx->pc != 0x271104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271104u; }
        if (ctx->pc != 0x271104u) { return; }
    }
    ctx->pc = 0x271104u;
label_271104:
    // 0x271104: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x271104u;
    {
        const bool branch_taken_0x271104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271104u;
            // 0x271108: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271104) {
            ctx->pc = 0x271150u;
            goto label_271150;
        }
    }
    ctx->pc = 0x27110Cu;
label_27110c:
    // 0x27110c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27110Cu;
    SET_GPR_U32(ctx, 31, 0x271114u);
    ctx->pc = 0x271110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27110Cu;
            // 0x271110: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271114u; }
        if (ctx->pc != 0x271114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271114u; }
        if (ctx->pc != 0x271114u) { return; }
    }
    ctx->pc = 0x271114u;
label_271114:
    // 0x271114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271118: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27111c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27111Cu;
    SET_GPR_U32(ctx, 31, 0x271124u);
    ctx->pc = 0x271120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27111Cu;
            // 0x271120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271124u; }
        if (ctx->pc != 0x271124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271124u; }
        if (ctx->pc != 0x271124u) { return; }
    }
    ctx->pc = 0x271124u;
label_271124:
    // 0x271124: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x271124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x271128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27112c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27112Cu;
    SET_GPR_U32(ctx, 31, 0x271134u);
    ctx->pc = 0x271130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27112Cu;
            // 0x271130: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271134u; }
        if (ctx->pc != 0x271134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271134u; }
        if (ctx->pc != 0x271134u) { return; }
    }
    ctx->pc = 0x271134u;
label_271134:
    // 0x271134: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271134u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x271138: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271138u;
    SET_GPR_U32(ctx, 31, 0x271140u);
    ctx->pc = 0x27113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271138u;
            // 0x27113c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271140u; }
        if (ctx->pc != 0x271140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271140u; }
        if (ctx->pc != 0x271140u) { return; }
    }
    ctx->pc = 0x271140u;
label_271140:
    // 0x271140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271140u;
    {
        const bool branch_taken_0x271140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271140u;
            // 0x271144: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271140) {
            ctx->pc = 0x271150u;
            goto label_271150;
        }
    }
    ctx->pc = 0x271148u;
label_271148:
    // 0x271148: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271148u;
    {
        const bool branch_taken_0x271148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271148u;
            // 0x27114c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271148) {
            ctx->pc = 0x27117Cu;
            goto label_27117c;
        }
    }
    ctx->pc = 0x271150u;
label_271150:
    // 0x271150: 0xc098a44  jal         func_262910
    ctx->pc = 0x271150u;
    SET_GPR_U32(ctx, 31, 0x271158u);
    ctx->pc = 0x271154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271150u;
            // 0x271154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271158u; }
        if (ctx->pc != 0x271158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271158u; }
        if (ctx->pc != 0x271158u) { return; }
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271158u;
    {
        const bool branch_taken_0x271158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271158u;
            // 0x27115c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271158) {
            ctx->pc = 0x271168u;
            goto label_271168;
        }
    }
    ctx->pc = 0x271160u;
    // 0x271160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271160u;
    {
        const bool branch_taken_0x271160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271160u;
            // 0x271164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271160) {
            ctx->pc = 0x271178u;
            goto label_271178;
        }
    }
    ctx->pc = 0x271168u;
label_271168:
    // 0x271168: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x271168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27116c: 0xc0972dc  jal         func_25CB70
    ctx->pc = 0x27116Cu;
    SET_GPR_U32(ctx, 31, 0x271174u);
    ctx->pc = 0x271170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27116Cu;
            // 0x271170: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB70u;
    if (runtime->hasFunction(0x25CB70u)) {
        auto targetFn = runtime->lookupFunction(0x25CB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271174u; }
        if (ctx->pc != 0x271174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Jump__12CSceneObjSeqFPffi_0x25cb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271174u; }
        if (ctx->pc != 0x271174u) { return; }
    }
    ctx->pc = 0x271174u;
label_271174:
    // 0x271174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271178:
    // 0x271178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x271178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27117c:
    // 0x27117c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x271180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x271184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271188: 0x3e00008  jr          $ra
    ctx->pc = 0x271188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271188u;
            // 0x27118c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271190u;
}
