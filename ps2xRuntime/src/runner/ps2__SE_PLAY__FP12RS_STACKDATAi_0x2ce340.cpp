#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SE_PLAY__FP12RS_STACKDATAi
// Address: 0x2ce340 - 0x2ce3bc
void ps2__SE_PLAY__FP12RS_STACKDATAi_0x2ce340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SE_PLAY__FP12RS_STACKDATAi_0x2ce340");
#endif

    switch (ctx->pc) {
        case 0x2ce364u: goto label_2ce364;
        case 0x2ce370u: goto label_2ce370;
        case 0x2ce3a8u: goto label_2ce3a8;
        default: break;
    }

    ctx->pc = 0x2ce340u;

    // 0x2ce340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce344: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce34c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE34Cu;
    {
        const bool branch_taken_0x2ce34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE34Cu;
            // 0x2ce350: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce34c) {
            ctx->pc = 0x2CE35Cu;
            goto label_2ce35c;
        }
    }
    ctx->pc = 0x2CE354u;
    // 0x2ce354: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CE354u;
    {
        const bool branch_taken_0x2ce354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE354u;
            // 0x2ce358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce354) {
            ctx->pc = 0x2CE3ACu;
            goto label_2ce3ac;
        }
    }
    ctx->pc = 0x2CE35Cu;
label_2ce35c:
    // 0x2ce35c: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE35Cu;
    SET_GPR_U32(ctx, 31, 0x2CE364u);
    ctx->pc = 0x2CE360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE35Cu;
            // 0x2ce360: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE364u; }
        if (ctx->pc != 0x2CE364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE364u; }
        if (ctx->pc != 0x2CE364u) { return; }
    }
    ctx->pc = 0x2CE364u;
label_2ce364:
    // 0x2ce364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce368: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE368u;
    SET_GPR_U32(ctx, 31, 0x2CE370u);
    ctx->pc = 0x2CE36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE368u;
            // 0x2ce36c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE370u; }
        if (ctx->pc != 0x2CE370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE370u; }
        if (ctx->pc != 0x2CE370u) { return; }
    }
    ctx->pc = 0x2CE370u;
label_2ce370:
    // 0x2ce370: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ce374: 0x16040006  bne         $s0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE374u;
    {
        const bool branch_taken_0x2ce374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CE378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE374u;
            // 0x2ce378: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce374) {
            ctx->pc = 0x2CE390u;
            goto label_2ce390;
        }
    }
    ctx->pc = 0x2CE37Cu;
    // 0x2ce37c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce380: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2ce380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce384: 0x8c640588  lw          $a0, 0x588($v1)
    ctx->pc = 0x2ce384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x2ce388: 0x0  nop
    ctx->pc = 0x2ce388u;
    // NOP
    // 0x2ce38c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ce38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ce390:
    // 0x2ce390: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE390u;
    {
        const bool branch_taken_0x2ce390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE390u;
            // 0x2ce394: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce390) {
            ctx->pc = 0x2CE3A0u;
            goto label_2ce3a0;
        }
    }
    ctx->pc = 0x2CE398u;
    // 0x2ce398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE398u;
    {
        const bool branch_taken_0x2ce398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE398u;
            // 0x2ce39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce398) {
            ctx->pc = 0x2CE3ACu;
            goto label_2ce3ac;
        }
    }
    ctx->pc = 0x2CE3A0u;
label_2ce3a0:
    // 0x2ce3a0: 0xc063818  jal         func_18E060
    ctx->pc = 0x2CE3A0u;
    SET_GPR_U32(ctx, 31, 0x2CE3A8u);
    ctx->pc = 0x2CE3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3A0u;
            // 0x2ce3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3A8u; }
        if (ctx->pc != 0x2CE3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3A8u; }
        if (ctx->pc != 0x2CE3A8u) { return; }
    }
    ctx->pc = 0x2CE3A8u;
label_2ce3a8:
    // 0x2ce3a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce3ac:
    // 0x2ce3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3B4u;
            // 0x2ce3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE3BCu;
}
