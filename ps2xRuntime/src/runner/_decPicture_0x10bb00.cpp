#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _decPicture
// Address: 0x10bb00 - 0x10bbcc
void _decPicture_0x10bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decPicture_0x10bb00");
#endif

    switch (ctx->pc) {
        case 0x10bb3cu: goto label_10bb3c;
        case 0x10bb9cu: goto label_10bb9c;
        case 0x10bba4u: goto label_10bba4;
        default: break;
    }

    ctx->pc = 0x10bb00u;

    // 0x10bb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10bb04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bb0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10bb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10bb18: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x10bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10bb1c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10BB1Cu;
    {
        const bool branch_taken_0x10bb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB1Cu;
            // 0x10bb20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb1c) {
            ctx->pc = 0x10BB48u;
            goto label_10bb48;
        }
    }
    ctx->pc = 0x10BB24u;
    // 0x10bb24: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x10bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x10bb28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BB28u;
    {
        const bool branch_taken_0x10bb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB28u;
            // 0x10bb2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb28) {
            ctx->pc = 0x10BB48u;
            goto label_10bb48;
        }
    }
    ctx->pc = 0x10BB30u;
    // 0x10bb30: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10bb34: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10BB34u;
    SET_GPR_U32(ctx, 31, 0x10BB3Cu);
    ctx->pc = 0x10BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB34u;
            // 0x10bb38: 0x24a507c0  addiu       $a1, $a1, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB3Cu; }
        if (ctx->pc != 0x10BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB3Cu; }
        if (ctx->pc != 0x10BB3Cu) { return; }
    }
    ctx->pc = 0x10BB3Cu;
label_10bb3c:
    // 0x10bb3c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x10bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x10bb40: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x10bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10bb44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10bb48:
    // 0x10bb48: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10BB48u;
    {
        const bool branch_taken_0x10bb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB48u;
            // 0x10bb4c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb48) {
            ctx->pc = 0x10BB84u;
            goto label_10bb84;
        }
    }
    ctx->pc = 0x10BB50u;
    // 0x10bb50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BB50u;
    {
        const bool branch_taken_0x10bb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB50u;
            // 0x10bb54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb50) {
            ctx->pc = 0x10BB68u;
            goto label_10bb68;
        }
    }
    ctx->pc = 0x10BB58u;
    // 0x10bb58: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BB58u;
    {
        const bool branch_taken_0x10bb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB58u;
            // 0x10bb5c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb58) {
            ctx->pc = 0x10BB7Cu;
            goto label_10bb7c;
        }
    }
    ctx->pc = 0x10BB60u;
    // 0x10bb60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10BB60u;
    {
        const bool branch_taken_0x10bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB60u;
            // 0x10bb64: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb60) {
            ctx->pc = 0x10BB90u;
            goto label_10bb90;
        }
    }
    ctx->pc = 0x10BB68u;
label_10bb68:
    // 0x10bb68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bb6c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BB6Cu;
    {
        const bool branch_taken_0x10bb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB6Cu;
            // 0x10bb70: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb6c) {
            ctx->pc = 0x10BB8Cu;
            goto label_10bb8c;
        }
    }
    ctx->pc = 0x10BB74u;
    // 0x10bb74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10BB74u;
    {
        const bool branch_taken_0x10bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB74u;
            // 0x10bb78: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb74) {
            ctx->pc = 0x10BB9Cu;
            goto label_10bb9c;
        }
    }
    ctx->pc = 0x10BB7Cu;
label_10bb7c:
    // 0x10bb7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10BB7Cu;
    {
        const bool branch_taken_0x10bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB7Cu;
            // 0x10bb80: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb7c) {
            ctx->pc = 0x10BB9Cu;
            goto label_10bb9c;
        }
    }
    ctx->pc = 0x10BB84u;
label_10bb84:
    // 0x10bb84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BB84u;
    {
        const bool branch_taken_0x10bb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB84u;
            // 0x10bb88: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb84) {
            ctx->pc = 0x10BB9Cu;
            goto label_10bb9c;
        }
    }
    ctx->pc = 0x10BB8Cu;
label_10bb8c:
    // 0x10bb8c: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x10bb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_10bb90:
    // 0x10bb90: 0x24a507e0  addiu       $a1, $a1, 0x7E0
    ctx->pc = 0x10bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2016));
    // 0x10bb94: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10BB94u;
    SET_GPR_U32(ctx, 31, 0x10BB9Cu);
    ctx->pc = 0x10BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB94u;
            // 0x10bb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB9Cu; }
        if (ctx->pc != 0x10BB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB9Cu; }
        if (ctx->pc != 0x10BB9Cu) { return; }
    }
    ctx->pc = 0x10BB9Cu;
label_10bb9c:
    // 0x10bb9c: 0xc04278a  jal         func_109E28
    ctx->pc = 0x10BB9Cu;
    SET_GPR_U32(ctx, 31, 0x10BBA4u);
    ctx->pc = 0x10BBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB9Cu;
            // 0x10bba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E28u;
    if (runtime->hasFunction(0x109E28u)) {
        auto targetFn = runtime->lookupFunction(0x109E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBA4u; }
        if (ctx->pc != 0x10BBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pictureData0_0x109e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBA4u; }
        if (ctx->pc != 0x10BBA4u) { return; }
    }
    ctx->pc = 0x10BBA4u;
label_10bba4:
    // 0x10bba4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10bba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bba8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10BBA8u;
    {
        const bool branch_taken_0x10bba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBA8u;
            // 0x10bbac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bba8) {
            ctx->pc = 0x10BBB4u;
            goto label_10bbb4;
        }
    }
    ctx->pc = 0x10BBB0u;
    // 0x10bbb0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x10bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_10bbb4:
    // 0x10bbb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bbb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10bbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10bbbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bbc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bbc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBC4u;
            // 0x10bbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BBCCu;
}
