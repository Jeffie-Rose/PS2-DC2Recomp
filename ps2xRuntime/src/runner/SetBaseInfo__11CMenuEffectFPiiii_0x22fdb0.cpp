#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBaseInfo__11CMenuEffectFPiiii
// Address: 0x22fdb0 - 0x22fe8c
void SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBaseInfo__11CMenuEffectFPiiii_0x22fdb0");
#endif

    switch (ctx->pc) {
        case 0x22fdd8u: goto label_22fdd8;
        case 0x22fe48u: goto label_22fe48;
        case 0x22fe80u: goto label_22fe80;
        default: break;
    }

    ctx->pc = 0x22fdb0u;

    // 0x22fdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fdb4: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x22fdb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22fdb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fdbc: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x22FDBCu;
    {
        const bool branch_taken_0x22fdbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDBCu;
            // 0x22fdc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdbc) {
            ctx->pc = 0x22FE6Cu;
            goto label_22fe6c;
        }
    }
    ctx->pc = 0x22FDC4u;
    // 0x22fdc4: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x22fdc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22fdc8: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x22FDC8u;
    {
        const bool branch_taken_0x22fdc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDC8u;
            // 0x22fdcc: 0x250afff8  addiu       $t2, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdc8) {
            ctx->pc = 0x22FE34u;
            goto label_22fe34;
        }
    }
    ctx->pc = 0x22FDD0u;
    // 0x22fdd0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x22fdd0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdd4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x22fdd4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fdd8:
    // 0x22fdd8: 0xac7021  addu        $t6, $a1, $t4
    ctx->pc = 0x22fdd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x22fddc: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x22fddcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x22fde0: 0x85c90000  lh          $t1, 0x0($t6)
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x22fde4: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x22fde4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x22fde8: 0x16a182a  slt         $v1, $t3, $t2
    ctx->pc = 0x22fde8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x22fdec: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x22fdecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x22fdf0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x22fdf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x22fdf4: 0xa5e90014  sh          $t1, 0x14($t7)
    ctx->pc = 0x22fdf4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 20), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fdf8: 0x85c90004  lh          $t1, 0x4($t6)
    ctx->pc = 0x22fdf8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x22fdfc: 0xa5e90016  sh          $t1, 0x16($t7)
    ctx->pc = 0x22fdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 22), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fe00: 0x85c90008  lh          $t1, 0x8($t6)
    ctx->pc = 0x22fe00u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x22fe04: 0xa5e90018  sh          $t1, 0x18($t7)
    ctx->pc = 0x22fe04u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 24), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fe08: 0x85c9000c  lh          $t1, 0xC($t6)
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x22fe0c: 0xa5e9001a  sh          $t1, 0x1A($t7)
    ctx->pc = 0x22fe0cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 26), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fe10: 0x85c90010  lh          $t1, 0x10($t6)
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x22fe14: 0xa5e9001c  sh          $t1, 0x1C($t7)
    ctx->pc = 0x22fe14u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 28), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fe18: 0x85c90014  lh          $t1, 0x14($t6)
    ctx->pc = 0x22fe18u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x22fe1c: 0xa5e9001e  sh          $t1, 0x1E($t7)
    ctx->pc = 0x22fe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 30), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fe20: 0x85c90018  lh          $t1, 0x18($t6)
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x22fe24: 0xa5e90020  sh          $t1, 0x20($t7)
    ctx->pc = 0x22fe24u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 32), (uint16_t)GPR_U32(ctx, 9));
    // 0x22fe28: 0x85c9001c  lh          $t1, 0x1C($t6)
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x22fe2c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x22FE2Cu;
    {
        const bool branch_taken_0x22fe2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE2Cu;
            // 0x22fe30: 0xa5e90022  sh          $t1, 0x22($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 34), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe2c) {
            ctx->pc = 0x22FDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22fdd8;
        }
    }
    ctx->pc = 0x22FE34u;
label_22fe34:
    // 0x22fe34: 0x0  nop
    ctx->pc = 0x22fe34u;
    // NOP
    // 0x22fe38: 0x168082a  slt         $at, $t3, $t0
    ctx->pc = 0x22fe38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22fe3c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x22FE3Cu;
    {
        const bool branch_taken_0x22fe3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE3Cu;
            // 0x22fe40: 0xb6080  sll         $t4, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe3c) {
            ctx->pc = 0x22FE6Cu;
            goto label_22fe6c;
        }
    }
    ctx->pc = 0x22FE44u;
    // 0x22fe44: 0xb6840  sll         $t5, $t3, 1
    ctx->pc = 0x22fe44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_22fe48:
    // 0x22fe48: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x22fe4c: 0x8d4821  addu        $t1, $a0, $t5
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x22fe50: 0x846a0000  lh          $t2, 0x0($v1)
    ctx->pc = 0x22fe50u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fe54: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x22fe54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x22fe58: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x22fe58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x22fe5c: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x22fe5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x22fe60: 0x168182a  slt         $v1, $t3, $t0
    ctx->pc = 0x22fe60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22fe64: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22FE64u;
    {
        const bool branch_taken_0x22fe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE64u;
            // 0x22fe68: 0xa52a0014  sh          $t2, 0x14($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe64) {
            ctx->pc = 0x22FE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22fe48;
        }
    }
    ctx->pc = 0x22FE6Cu;
label_22fe6c:
    // 0x22fe6c: 0x0  nop
    ctx->pc = 0x22fe6cu;
    // NOP
    // 0x22fe70: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FE70u;
    {
        const bool branch_taken_0x22fe70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE70u;
            // 0x22fe74: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe70) {
            ctx->pc = 0x22FE80u;
            goto label_22fe80;
        }
    }
    ctx->pc = 0x22FE78u;
    // 0x22fe78: 0xc08bfa8  jal         func_22FEA0
    ctx->pc = 0x22FE78u;
    SET_GPR_U32(ctx, 31, 0x22FE80u);
    ctx->pc = 0x22FEA0u;
    if (runtime->hasFunction(0x22FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x22FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE80u; }
        if (ctx->pc != 0x22FE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfoAll__11CMenuEffectFi_0x22fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE80u; }
        if (ctx->pc != 0x22FE80u) { return; }
    }
    ctx->pc = 0x22FE80u;
label_22fe80:
    // 0x22fe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE84u;
            // 0x22fe88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FE8Cu;
}
