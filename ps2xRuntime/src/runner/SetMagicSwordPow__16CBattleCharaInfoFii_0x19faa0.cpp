#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMagicSwordPow__16CBattleCharaInfoFii
// Address: 0x19faa0 - 0x19fb54
void SetMagicSwordPow__16CBattleCharaInfoFii_0x19faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMagicSwordPow__16CBattleCharaInfoFii_0x19faa0");
#endif

    switch (ctx->pc) {
        case 0x19fad0u: goto label_19fad0;
        case 0x19fb04u: goto label_19fb04;
        default: break;
    }

    ctx->pc = 0x19faa0u;

    // 0x19faa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19faa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19faa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19faac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19faacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fab0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19fab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fabc: 0x84830018  lh          $v1, 0x18($a0)
    ctx->pc = 0x19fabcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19fac0: 0x10720003  beq         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FAC0u;
    {
        const bool branch_taken_0x19fac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x19FAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAC0u;
            // 0x19fac4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fac0) {
            ctx->pc = 0x19FAD0u;
            goto label_19fad0;
        }
    }
    ctx->pc = 0x19FAC8u;
    // 0x19fac8: 0xc067f40  jal         func_19FD00
    ctx->pc = 0x19FAC8u;
    SET_GPR_U32(ctx, 31, 0x19FAD0u);
    ctx->pc = 0x19FD00u;
    if (runtime->hasFunction(0x19FD00u)) {
        auto targetFn = runtime->lookupFunction(0x19FD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD0u; }
        if (ctx->pc != 0x19FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearMagicSwordPow__16CBattleCharaInfoFv_0x19fd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD0u; }
        if (ctx->pc != 0x19FAD0u) { return; }
    }
    ctx->pc = 0x19FAD0u;
label_19fad0:
    // 0x19fad0: 0x640001a  bltz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x19FAD0u;
    {
        const bool branch_taken_0x19fad0 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x19fad0) {
            ctx->pc = 0x19FB3Cu;
            goto label_19fb3c;
        }
    }
    ctx->pc = 0x19FAD8u;
    // 0x19fad8: 0x2a410004  slti        $at, $s2, 0x4
    ctx->pc = 0x19fad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19fadc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FADCu;
    {
        const bool branch_taken_0x19fadc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fadc) {
            ctx->pc = 0x19FAECu;
            goto label_19faec;
        }
    }
    ctx->pc = 0x19FAE4u;
    // 0x19fae4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19FAE4u;
    {
        const bool branch_taken_0x19fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAE4u;
            // 0x19fae8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fae4) {
            ctx->pc = 0x19FB40u;
            goto label_19fb40;
        }
    }
    ctx->pc = 0x19FAECu;
label_19faec:
    // 0x19faec: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x19faecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19faf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19faf4: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FAF4u;
    {
        const bool branch_taken_0x19faf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19faf4) {
            ctx->pc = 0x19FB3Cu;
            goto label_19fb3c;
        }
    }
    ctx->pc = 0x19FAFCu;
    // 0x19fafc: 0xc067f20  jal         func_19FC80
    ctx->pc = 0x19FAFCu;
    SET_GPR_U32(ctx, 31, 0x19FB04u);
    ctx->pc = 0x19FB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAFCu;
            // 0x19fb00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FC80u;
    if (runtime->hasFunction(0x19FC80u)) {
        auto targetFn = runtime->lookupFunction(0x19FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB04u; }
        if (ctx->pc != 0x19FB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordCounterMax__16CBattleCharaInfoFv_0x19fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB04u; }
        if (ctx->pc != 0x19FB04u) { return; }
    }
    ctx->pc = 0x19FB04u;
label_19fb04:
    // 0x19fb04: 0x8623001a  lh          $v1, 0x1A($s1)
    ctx->pc = 0x19fb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x19fb08: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19fb08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19fb0c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19FB0Cu;
    {
        const bool branch_taken_0x19fb0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb0c) {
            ctx->pc = 0x19FB3Cu;
            goto label_19fb3c;
        }
    }
    ctx->pc = 0x19FB14u;
    // 0x19fb14: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FB14u;
    {
        const bool branch_taken_0x19fb14 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x19fb14) {
            ctx->pc = 0x19FB3Cu;
            goto label_19fb3c;
        }
    }
    ctx->pc = 0x19FB1Cu;
    // 0x19fb1c: 0xa6320018  sh          $s2, 0x18($s1)
    ctx->pc = 0x19fb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 18));
    // 0x19fb20: 0x8623001a  lh          $v1, 0x1A($s1)
    ctx->pc = 0x19fb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x19fb24: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19fb28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19fb2c: 0xa470001c  sh          $s0, 0x1C($v1)
    ctx->pc = 0x19fb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 16));
    // 0x19fb30: 0x8623001a  lh          $v1, 0x1A($s1)
    ctx->pc = 0x19fb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x19fb34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19fb38: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x19fb38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
label_19fb3c:
    // 0x19fb3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19fb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19fb40:
    // 0x19fb40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19fb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fb44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB4Cu;
            // 0x19fb50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FB54u;
}
