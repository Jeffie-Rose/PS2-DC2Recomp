#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsPut
// Address: 0x1056d8 - 0x1057a8
void sceDevConsPut_0x1056d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPut_0x1056d8");
#endif

    switch (ctx->pc) {
        case 0x10570cu: goto label_10570c;
        case 0x10578cu: goto label_10578c;
        default: break;
    }

    ctx->pc = 0x1056d8u;

    // 0x1056d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1056d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1056dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1056dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1056e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1056e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1056e4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1056e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1056e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1056e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1056ec: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x1056ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1056f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1056F0u;
    {
        const bool branch_taken_0x1056f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1056F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056F0u;
            // 0x1056f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056f0) {
            ctx->pc = 0x10571Cu;
            goto label_10571c;
        }
    }
    ctx->pc = 0x1056F8u;
    // 0x1056f8: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x1056f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1056fc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1056fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105700: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x105700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105704: 0xc041840  jal         func_106100
    ctx->pc = 0x105704u;
    SET_GPR_U32(ctx, 31, 0x10570Cu);
    ctx->pc = 0x105708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105704u;
            // 0x105708: 0x673825  or          $a3, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106100u;
    if (runtime->hasFunction(0x106100u)) {
        auto targetFn = runtime->lookupFunction(0x106100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10570Cu; }
        if (ctx->pc != 0x10570Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPutc_0x106100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10570Cu; }
        if (ctx->pc != 0x10570Cu) { return; }
    }
    ctx->pc = 0x10570Cu;
label_10570c:
    // 0x10570c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105714: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x105714u;
    {
        const bool branch_taken_0x105714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105714u;
            // 0x105718: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105714) {
            ctx->pc = 0x105744u;
            goto label_105744;
        }
    }
    ctx->pc = 0x10571Cu;
label_10571c:
    // 0x10571c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x105720: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105720u;
    {
        const bool branch_taken_0x105720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105720u;
            // 0x105724: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105720) {
            ctx->pc = 0x10573Cu;
            goto label_10573c;
        }
    }
    ctx->pc = 0x105728u;
    // 0x105728: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x105728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10572c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x105730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105734: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x105734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x105738: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_10573c:
    // 0x10573c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10573Cu;
    {
        const bool branch_taken_0x10573c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10573c) {
            ctx->pc = 0x105740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10573Cu;
            // 0x105740: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105744u;
            goto label_105744;
        }
    }
    ctx->pc = 0x105744u;
label_105744:
    // 0x105744: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x105744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x105748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10574c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10574cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x105750: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x105750u;
    {
        const bool branch_taken_0x105750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105750) {
            ctx->pc = 0x105754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105750u;
            // 0x105754: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10576Cu;
            goto label_10576c;
        }
    }
    ctx->pc = 0x105758u;
    // 0x105758: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x105758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10575c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10575cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x105760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105764: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x105764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x105768: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x105768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10576c:
    // 0x10576c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105770: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x105770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x105774: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105774u;
    {
        const bool branch_taken_0x105774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105774u;
            // 0x105778: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105774) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x10577Cu;
    // 0x10577c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x10577cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x105780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105784: 0xc041696  jal         func_105A58
    ctx->pc = 0x105784u;
    SET_GPR_U32(ctx, 31, 0x10578Cu);
    ctx->pc = 0x105788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105784u;
            // 0x105788: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105A58u;
    if (runtime->hasFunction(0x105A58u)) {
        auto targetFn = runtime->lookupFunction(0x105A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10578Cu; }
        if (ctx->pc != 0x10578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsRollup_0x105a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10578Cu; }
        if (ctx->pc != 0x10578Cu) { return; }
    }
    ctx->pc = 0x10578Cu;
label_10578c:
    // 0x10578c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105794: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x105794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x105798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10579c:
    // 0x10579c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10579cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1057a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1057A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1057A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057A0u;
            // 0x1057a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1057A8u;
}
