#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveMtnStep__FP6CScene
// Address: 0x2d9d00 - 0x2d9e10
void RemoveMtnStep__FP6CScene_0x2d9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveMtnStep__FP6CScene_0x2d9d00");
#endif

    switch (ctx->pc) {
        case 0x2d9d2cu: goto label_2d9d2c;
        case 0x2d9d8cu: goto label_2d9d8c;
        case 0x2d9d9cu: goto label_2d9d9c;
        case 0x2d9da8u: goto label_2d9da8;
        case 0x2d9dbcu: goto label_2d9dbc;
        case 0x2d9dccu: goto label_2d9dcc;
        case 0x2d9ddcu: goto label_2d9ddc;
        case 0x2d9decu: goto label_2d9dec;
        default: break;
    }

    ctx->pc = 0x2d9d00u;

    // 0x2d9d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d9d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9d10: 0x8f829e44  lw          $v0, -0x61BC($gp)
    ctx->pc = 0x2d9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942276)));
    // 0x2d9d14: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9D14u;
    {
        const bool branch_taken_0x2d9d14 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D14u;
            // 0x2d9d18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d14) {
            ctx->pc = 0x2D9D24u;
            goto label_2d9d24;
        }
    }
    ctx->pc = 0x2D9D1Cu;
    // 0x2d9d1c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2D9D1Cu;
    {
        const bool branch_taken_0x2d9d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D1Cu;
            // 0x2d9d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d1c) {
            ctx->pc = 0x2D9DFCu;
            goto label_2d9dfc;
        }
    }
    ctx->pc = 0x2D9D24u;
label_2d9d24:
    // 0x2d9d24: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2D9D24u;
    SET_GPR_U32(ctx, 31, 0x2D9D2Cu);
    ctx->pc = 0x2D9D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D24u;
            // 0x2d9d28: 0x8e252e5c  lw          $a1, 0x2E5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D2Cu; }
        if (ctx->pc != 0x2D9D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D2Cu; }
        if (ctx->pc != 0x2D9D2Cu) { return; }
    }
    ctx->pc = 0x2D9D2Cu;
label_2d9d2c:
    // 0x2d9d2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d30: 0x8f829e44  lw          $v0, -0x61BC($gp)
    ctx->pc = 0x2d9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942276)));
    // 0x2d9d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9d38: 0xaf829e44  sw          $v0, -0x61BC($gp)
    ctx->pc = 0x2d9d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942276), GPR_U32(ctx, 2));
    // 0x2d9d3c: 0x8f829e44  lw          $v0, -0x61BC($gp)
    ctx->pc = 0x2d9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942276)));
    // 0x2d9d40: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2d9d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d9d44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9D44u;
    {
        const bool branch_taken_0x2d9d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D44u;
            // 0x2d9d48: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d44) {
            ctx->pc = 0x2D9D54u;
            goto label_2d9d54;
        }
    }
    ctx->pc = 0x2D9D4Cu;
    // 0x2d9d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9d50: 0xaf829e3c  sw          $v0, -0x61C4($gp)
    ctx->pc = 0x2d9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 2));
label_2d9d54:
    // 0x2d9d54: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2d9d58: 0x24a58970  addiu       $a1, $a1, -0x7690
    ctx->pc = 0x2d9d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936944));
    // 0x2d9d5c: 0x248488f0  addiu       $a0, $a0, -0x7710
    ctx->pc = 0x2d9d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936816));
    // 0x2d9d60: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2d9d60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d9d64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9d68: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d9d6c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2d9d6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d9d70: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d9d70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d9d74: 0x8f839e44  lw          $v1, -0x61BC($gp)
    ctx->pc = 0x2d9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942276)));
    // 0x2d9d78: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D9D78u;
    {
        const bool branch_taken_0x2d9d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D78u;
            // 0x2d9d7c: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d78) {
            ctx->pc = 0x2D9DECu;
            goto label_2d9dec;
        }
    }
    ctx->pc = 0x2D9D80u;
    // 0x2d9d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d84: 0xc06c99c  jal         func_1B2670
    ctx->pc = 0x2D9D84u;
    SET_GPR_U32(ctx, 31, 0x2D9D8Cu);
    ctx->pc = 0x2D9D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D84u;
            // 0x2d9d88: 0x24a58960  addiu       $a1, $a1, -0x76A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2670u;
    if (runtime->hasFunction(0x1B2670u)) {
        auto targetFn = runtime->lookupFunction(0x1B2670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D8Cu; }
        if (ctx->pc != 0x2D9D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPf_0x1b2670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D8Cu; }
        if (ctx->pc != 0x2D9D8Cu) { return; }
    }
    ctx->pc = 0x2D9D8Cu;
label_2d9d8c:
    // 0x2d9d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d94: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2D9D94u;
    SET_GPR_U32(ctx, 31, 0x2D9D9Cu);
    ctx->pc = 0x2D9D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D94u;
            // 0x2d9d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D9Cu; }
        if (ctx->pc != 0x2D9D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D9Cu; }
        if (ctx->pc != 0x2D9D9Cu) { return; }
    }
    ctx->pc = 0x2D9D9Cu;
label_2d9d9c:
    // 0x2d9d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9da0: 0xc0beed8  jal         func_2FBB60
    ctx->pc = 0x2D9DA0u;
    SET_GPR_U32(ctx, 31, 0x2D9DA8u);
    ctx->pc = 0x2D9DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DA0u;
            // 0x2d9da4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB60u;
    if (runtime->hasFunction(0x2FBB60u)) {
        auto targetFn = runtime->lookupFunction(0x2FBB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DA8u; }
        if (ctx->pc != 0x2D9DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditSetPlaceAnime__FiP9CMapParts_0x2fbb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DA8u; }
        if (ctx->pc != 0x2D9DA8u) { return; }
    }
    ctx->pc = 0x2D9DA8u;
label_2d9da8:
    // 0x2d9da8: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2d9da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x2d9dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d9db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9db4: 0xc0b6784  jal         func_2D9E10
    ctx->pc = 0x2D9DB4u;
    SET_GPR_U32(ctx, 31, 0x2D9DBCu);
    ctx->pc = 0x2D9DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DB4u;
            // 0x2d9db8: 0x24c68960  addiu       $a2, $a2, -0x76A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E10u;
    if (runtime->hasFunction(0x2D9E10u)) {
        auto targetFn = runtime->lookupFunction(0x2D9E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DBCu; }
        if (ctx->pc != 0x2D9DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveEditParts__FP6CSceneiPf_0x2d9e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DBCu; }
        if (ctx->pc != 0x2D9DBCu) { return; }
    }
    ctx->pc = 0x2D9DBCu;
label_2d9dbc:
    // 0x2d9dbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9DBCu;
    {
        const bool branch_taken_0x2d9dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9dbc) {
            ctx->pc = 0x2D9DE4u;
            goto label_2d9de4;
        }
    }
    ctx->pc = 0x2D9DC4u;
    // 0x2d9dc4: 0xc064218  jal         func_190860
    ctx->pc = 0x2D9DC4u;
    SET_GPR_U32(ctx, 31, 0x2D9DCCu);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DCCu; }
        if (ctx->pc != 0x2D9DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DCCu; }
        if (ctx->pc != 0x2D9DCCu) { return; }
    }
    ctx->pc = 0x2D9DCCu;
label_2d9dcc:
    // 0x2d9dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dd0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2d9dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d9dd4: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D9DD4u;
    SET_GPR_U32(ctx, 31, 0x2D9DDCu);
    ctx->pc = 0x2D9DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DD4u;
            // 0x2d9dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DDCu; }
        if (ctx->pc != 0x2D9DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DDCu; }
        if (ctx->pc != 0x2D9DDCu) { return; }
    }
    ctx->pc = 0x2D9DDCu;
label_2d9ddc:
    // 0x2d9ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9DDCu;
    {
        const bool branch_taken_0x2d9ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DDCu;
            // 0x2d9de0: 0x8f829e44  lw          $v0, -0x61BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ddc) {
            ctx->pc = 0x2D9DF0u;
            goto label_2d9df0;
        }
    }
    ctx->pc = 0x2D9DE4u;
label_2d9de4:
    // 0x2d9de4: 0xc0beeb0  jal         func_2FBAC0
    ctx->pc = 0x2D9DE4u;
    SET_GPR_U32(ctx, 31, 0x2D9DECu);
    ctx->pc = 0x2FBAC0u;
    if (runtime->hasFunction(0x2FBAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DECu; }
        if (ctx->pc != 0x2D9DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceAnime__Fv_0x2fbac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DECu; }
        if (ctx->pc != 0x2D9DECu) { return; }
    }
    ctx->pc = 0x2D9DECu;
label_2d9dec:
    // 0x2d9dec: 0x8f829e44  lw          $v0, -0x61BC($gp)
    ctx->pc = 0x2d9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942276)));
label_2d9df0:
    // 0x2d9df0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9DF0u;
    {
        const bool branch_taken_0x2d9df0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DF0u;
            // 0x2d9df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9df0) {
            ctx->pc = 0x2D9DFCu;
            goto label_2d9dfc;
        }
    }
    ctx->pc = 0x2D9DF8u;
    // 0x2d9df8: 0xaf809e44  sw          $zero, -0x61BC($gp)
    ctx->pc = 0x2d9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942276), GPR_U32(ctx, 0));
label_2d9dfc:
    // 0x2d9dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d9dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E08u;
            // 0x2d9e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9E10u;
}
