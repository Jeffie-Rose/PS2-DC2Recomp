#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuLoop__Fv
// Address: 0x191c30 - 0x192360
void MenuLoop__Fv_0x191c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuLoop__Fv_0x191c30");
#endif

    switch (ctx->pc) {
        case 0x191c60u: goto label_191c60;
        case 0x191c88u: goto label_191c88;
        case 0x191ca4u: goto label_191ca4;
        case 0x191cc0u: goto label_191cc0;
        case 0x191cf8u: goto label_191cf8;
        case 0x191d00u: goto label_191d00;
        case 0x191d18u: goto label_191d18;
        case 0x191d98u: goto label_191d98;
        case 0x191db8u: goto label_191db8;
        case 0x191dfcu: goto label_191dfc;
        case 0x191e28u: goto label_191e28;
        case 0x191e54u: goto label_191e54;
        case 0x191e80u: goto label_191e80;
        case 0x191ebcu: goto label_191ebc;
        case 0x191ee8u: goto label_191ee8;
        case 0x191f8cu: goto label_191f8c;
        case 0x191fccu: goto label_191fcc;
        case 0x191fe0u: goto label_191fe0;
        case 0x191ff4u: goto label_191ff4;
        case 0x192008u: goto label_192008;
        case 0x19201cu: goto label_19201c;
        case 0x19204cu: goto label_19204c;
        case 0x192090u: goto label_192090;
        case 0x1920ecu: goto label_1920ec;
        case 0x192128u: goto label_192128;
        case 0x192160u: goto label_192160;
        case 0x1921b0u: goto label_1921b0;
        case 0x1921c0u: goto label_1921c0;
        case 0x1921dcu: goto label_1921dc;
        case 0x192200u: goto label_192200;
        case 0x192218u: goto label_192218;
        case 0x192244u: goto label_192244;
        case 0x192260u: goto label_192260;
        case 0x192294u: goto label_192294;
        case 0x19229cu: goto label_19229c;
        case 0x1922a4u: goto label_1922a4;
        case 0x1922d0u: goto label_1922d0;
        case 0x1922fcu: goto label_1922fc;
        case 0x192308u: goto label_192308;
        case 0x19231cu: goto label_19231c;
        case 0x192340u: goto label_192340;
        default: break;
    }

    ctx->pc = 0x191c30u;

    // 0x191c30: 0x27bdf650  addiu       $sp, $sp, -0x9B0
    ctx->pc = 0x191c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964816));
    // 0x191c34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x191c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x191c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x191c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x191c44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191c50: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x191c50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x191c54: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x191c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x191c58: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x191C58u;
    SET_GPR_U32(ctx, 31, 0x191C60u);
    ctx->pc = 0x191C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C58u;
            // 0x191c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C60u; }
        if (ctx->pc != 0x191C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C60u; }
        if (ctx->pc != 0x191C60u) { return; }
    }
    ctx->pc = 0x191C60u;
label_191c60:
    // 0x191c60: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x191c64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191C64u;
    {
        const bool branch_taken_0x191c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C64u;
            // 0x191c68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c64) {
            ctx->pc = 0x191C70u;
            goto label_191c70;
        }
    }
    ctx->pc = 0x191C6Cu;
    // 0x191c6c: 0xaf828b10  sw          $v0, -0x74F0($gp)
    ctx->pc = 0x191c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 2));
label_191c70:
    // 0x191c70: 0x8f838b10  lw          $v1, -0x74F0($gp)
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937360)));
    // 0x191c74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c78: 0x1465001a  bne         $v1, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x191C78u;
    {
        const bool branch_taken_0x191c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x191C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C78u;
            // 0x191c7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c78) {
            ctx->pc = 0x191CE4u;
            goto label_191ce4;
        }
    }
    ctx->pc = 0x191C80u;
    // 0x191c80: 0xc0b4c54  jal         func_2D3150
    ctx->pc = 0x191C80u;
    SET_GPR_U32(ctx, 31, 0x191C88u);
    ctx->pc = 0x2D3150u;
    if (runtime->hasFunction(0x2D3150u)) {
        auto targetFn = runtime->lookupFunction(0x2D3150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C88u; }
        if (ctx->pc != 0x191C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapSelectLoop__Fv_0x2d3150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C88u; }
        if (ctx->pc != 0x191C88u) { return; }
    }
    ctx->pc = 0x191C88u;
label_191c88:
    // 0x191c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x191c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191c8c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x191C8Cu;
    {
        const bool branch_taken_0x191c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x191C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C8Cu;
            // 0x191c90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c8c) {
            ctx->pc = 0x191CC8u;
            goto label_191cc8;
        }
    }
    ctx->pc = 0x191C94u;
    // 0x191c94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x191c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x191c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c9c: 0xc049c86  jal         func_127218
    ctx->pc = 0x191C9Cu;
    SET_GPR_U32(ctx, 31, 0x191CA4u);
    ctx->pc = 0x191CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C9Cu;
            // 0x191ca0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CA4u; }
        if (ctx->pc != 0x191CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CA4u; }
        if (ctx->pc != 0x191CA4u) { return; }
    }
    ctx->pc = 0x191CA4u;
label_191ca4:
    // 0x191ca4: 0x8f828acc  lw          $v0, -0x7534($gp)
    ctx->pc = 0x191ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937292)));
    // 0x191ca8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191cac: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x191cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x191cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191cb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x191cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x191cb8: 0xc064240  jal         func_190900
    ctx->pc = 0x191CB8u;
    SET_GPR_U32(ctx, 31, 0x191CC0u);
    ctx->pc = 0x191CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CB8u;
            // 0x191cbc: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CC0u; }
        if (ctx->pc != 0x191CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CC0u; }
        if (ctx->pc != 0x191CC0u) { return; }
    }
    ctx->pc = 0x191CC0u;
label_191cc0:
    // 0x191cc0: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x191CC0u;
    {
        const bool branch_taken_0x191cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CC0u;
            // 0x191cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cc0) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x191CC8u;
label_191cc8:
    // 0x191cc8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191CC8u;
    {
        const bool branch_taken_0x191cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x191CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CC8u;
            // 0x191ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cc8) {
            ctx->pc = 0x191CDCu;
            goto label_191cdc;
        }
    }
    ctx->pc = 0x191CD0u;
    // 0x191cd0: 0xaf808b10  sw          $zero, -0x74F0($gp)
    ctx->pc = 0x191cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 0));
    // 0x191cd4: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x191CD4u;
    {
        const bool branch_taken_0x191cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CD4u;
            // 0x191cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cd4) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x191CDCu;
label_191cdc:
    // 0x191cdc: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x191CDCu;
    {
        const bool branch_taken_0x191cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CDCu;
            // 0x191ce0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cdc) {
            ctx->pc = 0x192348u;
            goto label_192348;
        }
    }
    ctx->pc = 0x191CE4u;
label_191ce4:
    // 0x191ce4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191CE4u;
    {
        const bool branch_taken_0x191ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CE4u;
            // 0x191ce8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ce4) {
            ctx->pc = 0x191D08u;
            goto label_191d08;
        }
    }
    ctx->pc = 0x191CECu;
    // 0x191cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191cf0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x191CF0u;
    SET_GPR_U32(ctx, 31, 0x191CF8u);
    ctx->pc = 0x191CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CF0u;
            // 0x191cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CF8u; }
        if (ctx->pc != 0x191CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CF8u; }
        if (ctx->pc != 0x191CF8u) { return; }
    }
    ctx->pc = 0x191CF8u;
label_191cf8:
    // 0x191cf8: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x191CF8u;
    SET_GPR_U32(ctx, 31, 0x191D00u);
    ctx->pc = 0x1923B0u;
    if (runtime->hasFunction(0x1923B0u)) {
        auto targetFn = runtime->lookupFunction(0x1923B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D00u; }
        if (ctx->pc != 0x191D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventSelect__Fv_0x1923b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D00u; }
        if (ctx->pc != 0x191D00u) { return; }
    }
    ctx->pc = 0x191D00u;
label_191d00:
    // 0x191d00: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x191D00u;
    {
        const bool branch_taken_0x191d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D00u;
            // 0x191d04: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d00) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x191D08u;
label_191d08:
    // 0x191d08: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191D08u;
    {
        const bool branch_taken_0x191d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191d08) {
            ctx->pc = 0x191D2Cu;
            goto label_191d2c;
        }
    }
    ctx->pc = 0x191D10u;
    // 0x191d10: 0xc0b4c74  jal         func_2D31D0
    ctx->pc = 0x191D10u;
    SET_GPR_U32(ctx, 31, 0x191D18u);
    ctx->pc = 0x2D31D0u;
    if (runtime->hasFunction(0x2D31D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D31D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D18u; }
        if (ctx->pc != 0x191D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveDataEditLoop__Fv_0x2d31d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D18u; }
        if (ctx->pc != 0x191D18u) { return; }
    }
    ctx->pc = 0x191D18u;
label_191d18:
    // 0x191d18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191D18u;
    {
        const bool branch_taken_0x191d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D18u;
            // 0x191d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d18) {
            ctx->pc = 0x191D24u;
            goto label_191d24;
        }
    }
    ctx->pc = 0x191D20u;
    // 0x191d20: 0xaf808b10  sw          $zero, -0x74F0($gp)
    ctx->pc = 0x191d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 0));
label_191d24:
    // 0x191d24: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x191D24u;
    {
        const bool branch_taken_0x191d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191d24) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x191D2Cu;
label_191d2c:
    // 0x191d2c: 0xdf878070  ld          $a3, -0x7F90($gp)
    ctx->pc = 0x191d2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294934640)));
    // 0x191d30: 0x27a809a0  addiu       $t0, $sp, 0x9A0
    ctx->pc = 0x191d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
    // 0x191d34: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x191d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x191d38: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x191d3c: 0x248454f0  addiu       $a0, $a0, 0x54F0
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21744));
    // 0x191d40: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x191d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x191d44: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x191d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
    // 0x191d48: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x191d4c: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x191d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x191d50: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x191d50u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191d54: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x191d54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x191d58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x191d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191d5c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x191d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x191d60: 0x83828b28  lb          $v0, -0x74D8($gp)
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x191d64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191D64u;
    {
        const bool branch_taken_0x191d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D64u;
            // 0x191d68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d64) {
            ctx->pc = 0x191D74u;
            goto label_191d74;
        }
    }
    ctx->pc = 0x191D6Cu;
    // 0x191d6c: 0xa3858b28  sb          $a1, -0x74D8($gp)
    ctx->pc = 0x191d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937384), (uint8_t)GPR_U32(ctx, 5));
    // 0x191d70: 0xaf808b24  sw          $zero, -0x74DC($gp)
    ctx->pc = 0x191d70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 0));
label_191d74:
    // 0x191d74: 0xdf828078  ld          $v0, -0x7F88($gp)
    ctx->pc = 0x191d74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934648)));
    // 0x191d78: 0x27a309a8  addiu       $v1, $sp, 0x9A8
    ctx->pc = 0x191d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2472));
    // 0x191d7c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x191d80: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x191d84: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x191d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x191d88: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x191d8c: 0x26315430  addiu       $s1, $s1, 0x5430
    ctx->pc = 0x191d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21552));
    // 0x191d90: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191D90u;
    SET_GPR_U32(ctx, 31, 0x191D98u);
    ctx->pc = 0x191D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D90u;
            // 0x191d94: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D98u; }
        if (ctx->pc != 0x191D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D98u; }
        if (ctx->pc != 0x191D98u) { return; }
    }
    ctx->pc = 0x191D98u;
label_191d98:
    // 0x191d98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191D98u;
    {
        const bool branch_taken_0x191d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D98u;
            // 0x191d9c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d98) {
            ctx->pc = 0x191DACu;
            goto label_191dac;
        }
    }
    ctx->pc = 0x191DA0u;
    // 0x191da0: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191da4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191da8: 0xaf828b24  sw          $v0, -0x74DC($gp)
    ctx->pc = 0x191da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 2));
label_191dac:
    // 0x191dac: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x191dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x191db0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191DB0u;
    SET_GPR_U32(ctx, 31, 0x191DB8u);
    ctx->pc = 0x191DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191DB0u;
            // 0x191db4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DB8u; }
        if (ctx->pc != 0x191DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DB8u; }
        if (ctx->pc != 0x191DB8u) { return; }
    }
    ctx->pc = 0x191DB8u;
label_191db8:
    // 0x191db8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191DB8u;
    {
        const bool branch_taken_0x191db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191db8) {
            ctx->pc = 0x191DCCu;
            goto label_191dcc;
        }
    }
    ctx->pc = 0x191DC0u;
    // 0x191dc0: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191dc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191dc8: 0xaf828b24  sw          $v0, -0x74DC($gp)
    ctx->pc = 0x191dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 2));
label_191dcc:
    // 0x191dcc: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191dd0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191DD0u;
    {
        const bool branch_taken_0x191dd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x191DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191DD0u;
            // 0x191dd4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191dd0) {
            ctx->pc = 0x191DDCu;
            goto label_191ddc;
        }
    }
    ctx->pc = 0x191DD8u;
    // 0x191dd8: 0xaf828b24  sw          $v0, -0x74DC($gp)
    ctx->pc = 0x191dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 2));
label_191ddc:
    // 0x191ddc: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191de0: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x191de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x191de4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191DE4u;
    {
        const bool branch_taken_0x191de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191DE4u;
            // 0x191de8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191de4) {
            ctx->pc = 0x191DF0u;
            goto label_191df0;
        }
    }
    ctx->pc = 0x191DECu;
    // 0x191dec: 0xaf808b24  sw          $zero, -0x74DC($gp)
    ctx->pc = 0x191decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 0));
label_191df0:
    // 0x191df0: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x191df4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191DF4u;
    SET_GPR_U32(ctx, 31, 0x191DFCu);
    ctx->pc = 0x191DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191DF4u;
            // 0x191df8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DFCu; }
        if (ctx->pc != 0x191DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DFCu; }
        if (ctx->pc != 0x191DFCu) { return; }
    }
    ctx->pc = 0x191DFCu;
label_191dfc:
    // 0x191dfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191DFCu;
    {
        const bool branch_taken_0x191dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191DFCu;
            // 0x191e00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191dfc) {
            ctx->pc = 0x191E1Cu;
            goto label_191e1c;
        }
    }
    ctx->pc = 0x191E04u;
    // 0x191e04: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e0c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191e14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191e18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191e1c:
    // 0x191e1c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x191e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x191e20: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191E20u;
    SET_GPR_U32(ctx, 31, 0x191E28u);
    ctx->pc = 0x191E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191E20u;
            // 0x191e24: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E28u; }
        if (ctx->pc != 0x191E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E28u; }
        if (ctx->pc != 0x191E28u) { return; }
    }
    ctx->pc = 0x191E28u;
label_191e28:
    // 0x191e28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191E28u;
    {
        const bool branch_taken_0x191e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E28u;
            // 0x191e2c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e28) {
            ctx->pc = 0x191E48u;
            goto label_191e48;
        }
    }
    ctx->pc = 0x191E30u;
    // 0x191e30: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e38: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191e3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191e40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191e44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191e48:
    // 0x191e48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x191e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191e4c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191E4Cu;
    SET_GPR_U32(ctx, 31, 0x191E54u);
    ctx->pc = 0x191E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191E4Cu;
            // 0x191e50: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E54u; }
        if (ctx->pc != 0x191E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E54u; }
        if (ctx->pc != 0x191E54u) { return; }
    }
    ctx->pc = 0x191E54u;
label_191e54:
    // 0x191e54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191E54u;
    {
        const bool branch_taken_0x191e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E54u;
            // 0x191e58: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e54) {
            ctx->pc = 0x191E74u;
            goto label_191e74;
        }
    }
    ctx->pc = 0x191E5Cu;
    // 0x191e5c: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e64: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191e68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191e6c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x191e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x191e70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191e74:
    // 0x191e74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x191e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191e78: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191E78u;
    SET_GPR_U32(ctx, 31, 0x191E80u);
    ctx->pc = 0x191E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191E78u;
            // 0x191e7c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E80u; }
        if (ctx->pc != 0x191E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E80u; }
        if (ctx->pc != 0x191E80u) { return; }
    }
    ctx->pc = 0x191E80u;
label_191e80:
    // 0x191e80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191E80u;
    {
        const bool branch_taken_0x191e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e80) {
            ctx->pc = 0x191EA0u;
            goto label_191ea0;
        }
    }
    ctx->pc = 0x191E88u;
    // 0x191e88: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191e8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e90: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191e98: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x191e9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191ea0:
    // 0x191ea0: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x191ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191ea8: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x191ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x191eac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x191eb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191eb4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191EB4u;
    SET_GPR_U32(ctx, 31, 0x191EBCu);
    ctx->pc = 0x191EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191EB4u;
            // 0x191eb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191EBCu; }
        if (ctx->pc != 0x191EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191EBCu; }
        if (ctx->pc != 0x191EBCu) { return; }
    }
    ctx->pc = 0x191EBCu;
label_191ebc:
    // 0x191ebc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191EBCu;
    {
        const bool branch_taken_0x191ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EBCu;
            // 0x191ec0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ebc) {
            ctx->pc = 0x191EDCu;
            goto label_191edc;
        }
    }
    ctx->pc = 0x191EC4u;
    // 0x191ec4: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191ecc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191ed0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191ed4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x191ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x191ed8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191edc:
    // 0x191edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191ee0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x191EE0u;
    SET_GPR_U32(ctx, 31, 0x191EE8u);
    ctx->pc = 0x191EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191EE0u;
            // 0x191ee4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191EE8u; }
        if (ctx->pc != 0x191EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191EE8u; }
        if (ctx->pc != 0x191EE8u) { return; }
    }
    ctx->pc = 0x191EE8u;
label_191ee8:
    // 0x191ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191EE8u;
    {
        const bool branch_taken_0x191ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191ee8) {
            ctx->pc = 0x191F08u;
            goto label_191f08;
        }
    }
    ctx->pc = 0x191EF0u;
    // 0x191ef0: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191ef8: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191efc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191f00: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x191f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x191f04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191f08:
    // 0x191f08: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191f10: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191f14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191f18: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x191f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x191f1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x191F1Cu;
    {
        const bool branch_taken_0x191f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F1Cu;
            // 0x191f20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f1c) {
            ctx->pc = 0x191F28u;
            goto label_191f28;
        }
    }
    ctx->pc = 0x191F24u;
    // 0x191f24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191f28:
    // 0x191f28: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191f2c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x191f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x191f30: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x191F30u;
    {
        const bool branch_taken_0x191f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F30u;
            // 0x191f34: 0x27b200c0  addiu       $s2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f30) {
            ctx->pc = 0x191F74u;
            goto label_191f74;
        }
    }
    ctx->pc = 0x191F38u;
    // 0x191f38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191f3c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191f40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191f44: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191F44u;
    {
        const bool branch_taken_0x191f44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x191f44) {
            ctx->pc = 0x191F50u;
            goto label_191f50;
        }
    }
    ctx->pc = 0x191F4Cu;
    // 0x191f4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x191f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_191f50:
    // 0x191f50: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x191f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191f58: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x191f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191f60: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x191f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x191f64: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x191F64u;
    {
        const bool branch_taken_0x191f64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x191F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F64u;
            // 0x191f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f64) {
            ctx->pc = 0x191F70u;
            goto label_191f70;
        }
    }
    ctx->pc = 0x191F6Cu;
    // 0x191f6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191f70:
    // 0x191f70: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_191f74:
    // 0x191f74: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x191f78: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x191f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x191f7c: 0x24a54d30  addiu       $a1, $a1, 0x4D30
    ctx->pc = 0x191f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
    // 0x191f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f84: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x191F84u;
    SET_GPR_U32(ctx, 31, 0x191F8Cu);
    ctx->pc = 0x191F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191F84u;
            // 0x191f88: 0x24c64d48  addiu       $a2, $a2, 0x4D48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F8Cu; }
        if (ctx->pc != 0x191F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F8Cu; }
        if (ctx->pc != 0x191F8Cu) { return; }
    }
    ctx->pc = 0x191F8Cu;
label_191f8c:
    // 0x191f8c: 0x8f838ae8  lw          $v1, -0x7518($gp)
    ctx->pc = 0x191f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x191f90: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x191f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x191f94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x191f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191f98: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x191F98u;
    {
        const bool branch_taken_0x191f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F98u;
            // 0x191f9c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f98) {
            ctx->pc = 0x191FE8u;
            goto label_191fe8;
        }
    }
    ctx->pc = 0x191FA0u;
    // 0x191fa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191fa4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x191FA4u;
    {
        const bool branch_taken_0x191fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FA4u;
            // 0x191fa8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fa4) {
            ctx->pc = 0x191FD4u;
            goto label_191fd4;
        }
    }
    ctx->pc = 0x191FACu;
    // 0x191fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191FB0u;
    {
        const bool branch_taken_0x191fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FB0u;
            // 0x191fb4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fb0) {
            ctx->pc = 0x191FC0u;
            goto label_191fc0;
        }
    }
    ctx->pc = 0x191FB8u;
    // 0x191fb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x191FB8u;
    {
        const bool branch_taken_0x191fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FB8u;
            // 0x191fbc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fb8) {
            ctx->pc = 0x191FFCu;
            goto label_191ffc;
        }
    }
    ctx->pc = 0x191FC0u;
label_191fc0:
    // 0x191fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fc4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x191FC4u;
    SET_GPR_U32(ctx, 31, 0x191FCCu);
    ctx->pc = 0x191FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191FC4u;
            // 0x191fc8: 0x24a54d60  addiu       $a1, $a1, 0x4D60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FCCu; }
        if (ctx->pc != 0x191FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FCCu; }
        if (ctx->pc != 0x191FCCu) { return; }
    }
    ctx->pc = 0x191FCCu;
label_191fcc:
    // 0x191fcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x191FCCu;
    {
        const bool branch_taken_0x191fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FCCu;
            // 0x191fd0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fcc) {
            ctx->pc = 0x19200Cu;
            goto label_19200c;
        }
    }
    ctx->pc = 0x191FD4u;
label_191fd4:
    // 0x191fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fd8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x191FD8u;
    SET_GPR_U32(ctx, 31, 0x191FE0u);
    ctx->pc = 0x191FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191FD8u;
            // 0x191fdc: 0x24a54d80  addiu       $a1, $a1, 0x4D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FE0u; }
        if (ctx->pc != 0x191FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FE0u; }
        if (ctx->pc != 0x191FE0u) { return; }
    }
    ctx->pc = 0x191FE0u;
label_191fe0:
    // 0x191fe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191FE0u;
    {
        const bool branch_taken_0x191fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FE0u;
            // 0x191fe4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fe0) {
            ctx->pc = 0x19200Cu;
            goto label_19200c;
        }
    }
    ctx->pc = 0x191FE8u;
label_191fe8:
    // 0x191fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fec: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x191FECu;
    SET_GPR_U32(ctx, 31, 0x191FF4u);
    ctx->pc = 0x191FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191FECu;
            // 0x191ff0: 0x24a54d90  addiu       $a1, $a1, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FF4u; }
        if (ctx->pc != 0x191FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FF4u; }
        if (ctx->pc != 0x191FF4u) { return; }
    }
    ctx->pc = 0x191FF4u;
label_191ff4:
    // 0x191ff4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x191FF4u;
    {
        const bool branch_taken_0x191ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FF4u;
            // 0x191ff8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ff4) {
            ctx->pc = 0x19200Cu;
            goto label_19200c;
        }
    }
    ctx->pc = 0x191FFCu;
label_191ffc:
    // 0x191ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192000: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192000u;
    SET_GPR_U32(ctx, 31, 0x192008u);
    ctx->pc = 0x192004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192000u;
            // 0x192004: 0x24a54db8  addiu       $a1, $a1, 0x4DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192008u; }
        if (ctx->pc != 0x192008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192008u; }
        if (ctx->pc != 0x192008u) { return; }
    }
    ctx->pc = 0x192008u;
label_192008:
    // 0x192008: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19200c:
    // 0x19200c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x19200cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x192010: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x192010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x192014: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x192014u;
    SET_GPR_U32(ctx, 31, 0x19201Cu);
    ctx->pc = 0x192018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192014u;
            // 0x192018: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19201Cu; }
        if (ctx->pc != 0x19201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19201Cu; }
        if (ctx->pc != 0x19201Cu) { return; }
    }
    ctx->pc = 0x19201Cu;
label_19201c:
    // 0x19201c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19201Cu;
    {
        const bool branch_taken_0x19201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19201c) {
            ctx->pc = 0x192030u;
            goto label_192030;
        }
    }
    ctx->pc = 0x192024u;
    // 0x192024: 0x8f828ae8  lw          $v0, -0x7518($gp)
    ctx->pc = 0x192024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x192028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19202c: 0xaf828ae8  sw          $v0, -0x7518($gp)
    ctx->pc = 0x19202cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 2));
label_192030:
    // 0x192030: 0x8f828ae8  lw          $v0, -0x7518($gp)
    ctx->pc = 0x192030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x192034: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x192034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x192038: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x192038u;
    {
        const bool branch_taken_0x192038 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192038u;
            // 0x19203c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192038) {
            ctx->pc = 0x192044u;
            goto label_192044;
        }
    }
    ctx->pc = 0x192040u;
    // 0x192040: 0xaf808ae8  sw          $zero, -0x7518($gp)
    ctx->pc = 0x192040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 0));
label_192044:
    // 0x192044: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x192044u;
    {
        const bool branch_taken_0x192044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192044) {
            ctx->pc = 0x192178u;
            goto label_192178;
        }
    }
    ctx->pc = 0x19204Cu;
label_19204c:
    // 0x19204c: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19204Cu;
    {
        const bool branch_taken_0x19204c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19204c) {
            ctx->pc = 0x192098u;
            goto label_192098;
        }
    }
    ctx->pc = 0x192054u;
    // 0x192054: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x192054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x192058: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x192058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x19205c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192060: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192068: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x192068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x19206c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x19206cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x192070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192078: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19207c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x192080: 0x8c4800a0  lw          $t0, 0xA0($v0)
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x192084: 0x8c6609a8  lw          $a2, 0x9A8($v1)
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2472)));
    // 0x192088: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192088u;
    SET_GPR_U32(ctx, 31, 0x192090u);
    ctx->pc = 0x19208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192088u;
            // 0x19208c: 0x24a54dc0  addiu       $a1, $a1, 0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192090u; }
        if (ctx->pc != 0x192090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192090u; }
        if (ctx->pc != 0x192090u) { return; }
    }
    ctx->pc = 0x192090u;
label_192090:
    // 0x192090: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x192090u;
    {
        const bool branch_taken_0x192090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192090u;
            // 0x192094: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192090) {
            ctx->pc = 0x192164u;
            goto label_192164;
        }
    }
    ctx->pc = 0x192098u;
label_192098:
    // 0x192098: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x192098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19209c: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19209Cu;
    {
        const bool branch_taken_0x19209c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1920A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19209Cu;
            // 0x1920a0: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19209c) {
            ctx->pc = 0x1920F4u;
            goto label_1920f4;
        }
    }
    ctx->pc = 0x1920A4u;
    // 0x1920a4: 0x8f868b24  lw          $a2, -0x74DC($gp)
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x1920a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1920a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1920ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1920acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1920b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1920b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1920b4: 0x2063026  xor         $a2, $s0, $a2
    ctx->pc = 0x1920b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 6));
    // 0x1920b8: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1920bc: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x1920bcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1920c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1920c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1920c8: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1920cc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1920d0: 0x8cc609a8  lw          $a2, 0x9A8($a2)
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2472)));
    // 0x1920d4: 0x8c6809a0  lw          $t0, 0x9A0($v1)
    ctx->pc = 0x1920d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2464)));
    // 0x1920d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1920dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1920e0: 0x8c4909a0  lw          $t1, 0x9A0($v0)
    ctx->pc = 0x1920e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
    // 0x1920e4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1920E4u;
    SET_GPR_U32(ctx, 31, 0x1920ECu);
    ctx->pc = 0x1920E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1920E4u;
            // 0x1920e8: 0x24a54dd0  addiu       $a1, $a1, 0x4DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920ECu; }
        if (ctx->pc != 0x1920ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920ECu; }
        if (ctx->pc != 0x1920ECu) { return; }
    }
    ctx->pc = 0x1920ECu;
label_1920ec:
    // 0x1920ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1920ECu;
    {
        const bool branch_taken_0x1920ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1920ECu;
            // 0x1920f0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920ec) {
            ctx->pc = 0x192164u;
            goto label_192164;
        }
    }
    ctx->pc = 0x1920F4u;
label_1920f4:
    // 0x1920f4: 0x0  nop
    ctx->pc = 0x1920f4u;
    // NOP
    // 0x1920f8: 0x1e00000d  bgtz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1920F8u;
    {
        const bool branch_taken_0x1920f8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1920f8) {
            ctx->pc = 0x192130u;
            goto label_192130;
        }
    }
    ctx->pc = 0x192100u;
    // 0x192100: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x192100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x192104: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19210c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x19210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x192110: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x192110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x192114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192118: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x192118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19211c: 0x8c4609a8  lw          $a2, 0x9A8($v0)
    ctx->pc = 0x19211cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
    // 0x192120: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192120u;
    SET_GPR_U32(ctx, 31, 0x192128u);
    ctx->pc = 0x192124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192120u;
            // 0x192124: 0x24a54de8  addiu       $a1, $a1, 0x4DE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192128u; }
        if (ctx->pc != 0x192128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192128u; }
        if (ctx->pc != 0x192128u) { return; }
    }
    ctx->pc = 0x192128u;
label_192128:
    // 0x192128: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x192128u;
    {
        const bool branch_taken_0x192128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192128u;
            // 0x19212c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192128) {
            ctx->pc = 0x192164u;
            goto label_192164;
        }
    }
    ctx->pc = 0x192130u;
label_192130:
    // 0x192130: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x192134: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x192138: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19213c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192144: 0x2031026  xor         $v0, $s0, $v1
    ctx->pc = 0x192144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x192148: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x192148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19214c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192150: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x192154: 0x8c4609a8  lw          $a2, 0x9A8($v0)
    ctx->pc = 0x192154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
    // 0x192158: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x192158u;
    SET_GPR_U32(ctx, 31, 0x192160u);
    ctx->pc = 0x19215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192158u;
            // 0x19215c: 0x24a54df0  addiu       $a1, $a1, 0x4DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192160u; }
        if (ctx->pc != 0x192160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192160u; }
        if (ctx->pc != 0x192160u) { return; }
    }
    ctx->pc = 0x192160u;
label_192160:
    // 0x192160: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_192164:
    // 0x192164: 0x0  nop
    ctx->pc = 0x192164u;
    // NOP
    // 0x192168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19216c: 0x2a01000e  slti        $at, $s0, 0xE
    ctx->pc = 0x19216cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x192170: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x192170u;
    {
        const bool branch_taken_0x192170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192170u;
            // 0x192174: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192170) {
            ctx->pc = 0x192194u;
            goto label_192194;
        }
    }
    ctx->pc = 0x192178u;
label_192178:
    // 0x192178: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19217c: 0x244254b0  addiu       $v0, $v0, 0x54B0
    ctx->pc = 0x19217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21680));
    // 0x192180: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x192180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x192184: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x192184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192188: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x192188u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19218c: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x19218Cu;
    {
        const bool branch_taken_0x19218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19218Cu;
            // 0x192190: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19218c) {
            ctx->pc = 0x19204Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19204c;
        }
    }
    ctx->pc = 0x192194u;
label_192194:
    // 0x192194: 0x0  nop
    ctx->pc = 0x192194u;
    // NOP
    // 0x192198: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19219c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x19219cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1921a0: 0x24848090  addiu       $a0, $a0, -0x7F70
    ctx->pc = 0x1921a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
    // 0x1921a4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1921a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1921a8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1921A8u;
    SET_GPR_U32(ctx, 31, 0x1921B0u);
    ctx->pc = 0x1921ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921A8u;
            // 0x1921ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921B0u; }
        if (ctx->pc != 0x1921B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921B0u; }
        if (ctx->pc != 0x1921B0u) { return; }
    }
    ctx->pc = 0x1921B0u;
label_1921b0:
    // 0x1921b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1921b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1921b4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1921b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1921b8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1921B8u;
    SET_GPR_U32(ctx, 31, 0x1921C0u);
    ctx->pc = 0x1921BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921B8u;
            // 0x1921bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921C0u; }
        if (ctx->pc != 0x1921C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921C0u; }
        if (ctx->pc != 0x1921C0u) { return; }
    }
    ctx->pc = 0x1921C0u;
label_1921c0:
    // 0x1921c0: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1921C0u;
    {
        const bool branch_taken_0x1921c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1921C0u;
            // 0x1921c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921c0) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x1921C8u;
    // 0x1921c8: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x1921cc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1921CCu;
    {
        const bool branch_taken_0x1921cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1921D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1921CCu;
            // 0x1921d0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921cc) {
            ctx->pc = 0x1921E4u;
            goto label_1921e4;
        }
    }
    ctx->pc = 0x1921D4u;
    // 0x1921d4: 0xc0648e4  jal         func_192390
    ctx->pc = 0x1921D4u;
    SET_GPR_U32(ctx, 31, 0x1921DCu);
    ctx->pc = 0x192390u;
    if (runtime->hasFunction(0x192390u)) {
        auto targetFn = runtime->lookupFunction(0x192390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921DCu; }
        if (ctx->pc != 0x1921DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEventSelect__Fv_0x192390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921DCu; }
        if (ctx->pc != 0x1921DCu) { return; }
    }
    ctx->pc = 0x1921DCu;
label_1921dc:
    // 0x1921dc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1921DCu;
    {
        const bool branch_taken_0x1921dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1921DCu;
            // 0x1921e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921dc) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x1921E4u;
label_1921e4:
    // 0x1921e4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1921E4u;
    {
        const bool branch_taken_0x1921e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1921E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1921E4u;
            // 0x1921e8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921e4) {
            ctx->pc = 0x192208u;
            goto label_192208;
        }
    }
    ctx->pc = 0x1921ECu;
    // 0x1921ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1921ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1921f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1921f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1921f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1921f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1921f8: 0xc064300  jal         func_190C00
    ctx->pc = 0x1921F8u;
    SET_GPR_U32(ctx, 31, 0x192200u);
    ctx->pc = 0x1921FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921F8u;
            // 0x1921fc: 0x8f858ac0  lw          $a1, -0x7540($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190C00u;
    if (runtime->hasFunction(0x190C00u)) {
        auto targetFn = runtime->lookupFunction(0x190C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192200u; }
        if (ctx->pc != 0x192200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LanguageChange__FiP1_0x190c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192200u; }
        if (ctx->pc != 0x192200u) { return; }
    }
    ctx->pc = 0x192200u;
label_192200:
    // 0x192200: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x192200u;
    {
        const bool branch_taken_0x192200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192200u;
            // 0x192204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192200) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x192208u;
label_192208:
    // 0x192208: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x192208u;
    {
        const bool branch_taken_0x192208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192208u;
            // 0x19220c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192208) {
            ctx->pc = 0x19224Cu;
            goto label_19224c;
        }
    }
    ctx->pc = 0x192210u;
    // 0x192210: 0xc064220  jal         func_190880
    ctx->pc = 0x192210u;
    SET_GPR_U32(ctx, 31, 0x192218u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192218u; }
        if (ctx->pc != 0x192218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192218u; }
        if (ctx->pc != 0x192218u) { return; }
    }
    ctx->pc = 0x192218u;
label_192218:
    // 0x192218: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x192218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x19221c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x19221cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x192220: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x192224: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x192224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x192228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19222c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192238: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x192238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19223c: 0xc0686e0  jal         func_1A1B80
    ctx->pc = 0x19223Cu;
    SET_GPR_U32(ctx, 31, 0x192244u);
    ctx->pc = 0x192240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19223Cu;
            // 0x192240: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B80u;
    if (runtime->hasFunction(0x1A1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192244u; }
        if (ctx->pc != 0x192244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugGetItem__FP16CUserDataManageri_0x1a1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192244u; }
        if (ctx->pc != 0x192244u) { return; }
    }
    ctx->pc = 0x192244u;
label_192244:
    // 0x192244: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x192244u;
    {
        const bool branch_taken_0x192244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192244u;
            // 0x192248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192244) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x19224Cu;
label_19224c:
    // 0x19224c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19224Cu;
    {
        const bool branch_taken_0x19224c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19224Cu;
            // 0x192250: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19224c) {
            ctx->pc = 0x192270u;
            goto label_192270;
        }
    }
    ctx->pc = 0x192254u;
    // 0x192254: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x192258: 0xc0b4c70  jal         func_2D31C0
    ctx->pc = 0x192258u;
    SET_GPR_U32(ctx, 31, 0x192260u);
    ctx->pc = 0x19225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192258u;
            // 0x19225c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D31C0u;
    if (runtime->hasFunction(0x2D31C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D31C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192260u; }
        if (ctx->pc != 0x192260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveDataEdit__FP9mgCMemory_0x2d31c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192260u; }
        if (ctx->pc != 0x192260u) { return; }
    }
    ctx->pc = 0x192260u;
label_192260:
    // 0x192260: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192268: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x192268u;
    {
        const bool branch_taken_0x192268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192268u;
            // 0x19226c: 0xaf838b10  sw          $v1, -0x74F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192268) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x192270u;
label_192270:
    // 0x192270: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x192270u;
    {
        const bool branch_taken_0x192270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192270u;
            // 0x192274: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192270) {
            ctx->pc = 0x1922ACu;
            goto label_1922ac;
        }
    }
    ctx->pc = 0x192278u;
    // 0x192278: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x192278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19227c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x19227cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192280: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192284: 0x27a408c0  addiu       $a0, $sp, 0x8C0
    ctx->pc = 0x192284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
    // 0x192288: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x192288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19228c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x19228Cu;
    SET_GPR_U32(ctx, 31, 0x192294u);
    ctx->pc = 0x192290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19228Cu;
            // 0x192290: 0x24a54df8  addiu       $a1, $a1, 0x4DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192294u; }
        if (ctx->pc != 0x192294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192294u; }
        if (ctx->pc != 0x192294u) { return; }
    }
    ctx->pc = 0x192294u;
label_192294:
    // 0x192294: 0xc064228  jal         func_1908A0
    ctx->pc = 0x192294u;
    SET_GPR_U32(ctx, 31, 0x19229Cu);
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19229Cu; }
        if (ctx->pc != 0x19229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19229Cu; }
        if (ctx->pc != 0x19229Cu) { return; }
    }
    ctx->pc = 0x19229Cu;
label_19229c:
    // 0x19229c: 0xc064df0  jal         func_1937C0
    ctx->pc = 0x19229Cu;
    SET_GPR_U32(ctx, 31, 0x1922A4u);
    ctx->pc = 0x1922A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19229Cu;
            // 0x1922a0: 0x27a408c0  addiu       $a0, $sp, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1937C0u;
    if (runtime->hasFunction(0x1937C0u)) {
        auto targetFn = runtime->lookupFunction(0x1937C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922A4u; }
        if (ctx->pc != 0x1922A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameConfig__FPc_0x1937c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922A4u; }
        if (ctx->pc != 0x1922A4u) { return; }
    }
    ctx->pc = 0x1922A4u;
label_1922a4:
    // 0x1922a4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1922A4u;
    {
        const bool branch_taken_0x1922a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922A4u;
            // 0x1922a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922a4) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x1922ACu;
label_1922ac:
    // 0x1922ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1922acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1922b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1922b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1922b4: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1922B4u;
    {
        const bool branch_taken_0x1922b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1922B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922B4u;
            // 0x1922b8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922b4) {
            ctx->pc = 0x1922E4u;
            goto label_1922e4;
        }
    }
    ctx->pc = 0x1922BCu;
    // 0x1922bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1922bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1922c0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1922C0u;
    {
        const bool branch_taken_0x1922c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1922C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922C0u;
            // 0x1922c4: 0x3c0401e6  lui         $a0, 0x1E6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922c0) {
            ctx->pc = 0x1922E0u;
            goto label_1922e0;
        }
    }
    ctx->pc = 0x1922C8u;
    // 0x1922c8: 0xc0b4a38  jal         func_2D28E0
    ctx->pc = 0x1922C8u;
    SET_GPR_U32(ctx, 31, 0x1922D0u);
    ctx->pc = 0x1922CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1922C8u;
            // 0x1922cc: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D28E0u;
    if (runtime->hasFunction(0x2D28E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D28E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922D0u; }
        if (ctx->pc != 0x1922D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMapSelect__FP9mgCMemory_0x2d28e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922D0u; }
        if (ctx->pc != 0x1922D0u) { return; }
    }
    ctx->pc = 0x1922D0u;
label_1922d0:
    // 0x1922d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1922d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1922d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1922d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1922D8u;
    {
        const bool branch_taken_0x1922d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922D8u;
            // 0x1922dc: 0xaf838b10  sw          $v1, -0x74F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922d8) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x1922E0u;
label_1922e0:
    // 0x1922e0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1922e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1922e4:
    // 0x1922e4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1922E4u;
    {
        const bool branch_taken_0x1922e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1922E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922E4u;
            // 0x1922e8: 0x27a40950  addiu       $a0, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922e4) {
            ctx->pc = 0x192310u;
            goto label_192310;
        }
    }
    ctx->pc = 0x1922ECu;
    // 0x1922ec: 0x27a40900  addiu       $a0, $sp, 0x900
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x1922f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1922f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1922f4: 0xc049c86  jal         func_127218
    ctx->pc = 0x1922F4u;
    SET_GPR_U32(ctx, 31, 0x1922FCu);
    ctx->pc = 0x1922F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1922F4u;
            // 0x1922f8: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922FCu; }
        if (ctx->pc != 0x1922FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922FCu; }
        if (ctx->pc != 0x1922FCu) { return; }
    }
    ctx->pc = 0x1922FCu;
label_1922fc:
    // 0x1922fc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x192300: 0xc064240  jal         func_190900
    ctx->pc = 0x192300u;
    SET_GPR_U32(ctx, 31, 0x192308u);
    ctx->pc = 0x192304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192300u;
            // 0x192304: 0x27a50900  addiu       $a1, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192308u; }
        if (ctx->pc != 0x192308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192308u; }
        if (ctx->pc != 0x192308u) { return; }
    }
    ctx->pc = 0x192308u;
label_192308:
    // 0x192308: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x192308u;
    {
        const bool branch_taken_0x192308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192308u;
            // 0x19230c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192308) {
            ctx->pc = 0x192344u;
            goto label_192344;
        }
    }
    ctx->pc = 0x192310u;
label_192310:
    // 0x192310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192314: 0xc049c86  jal         func_127218
    ctx->pc = 0x192314u;
    SET_GPR_U32(ctx, 31, 0x19231Cu);
    ctx->pc = 0x192318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192314u;
            // 0x192318: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19231Cu; }
        if (ctx->pc != 0x19231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19231Cu; }
        if (ctx->pc != 0x19231Cu) { return; }
    }
    ctx->pc = 0x19231Cu;
label_19231c:
    // 0x19231c: 0x8f848b24  lw          $a0, -0x74DC($gp)
    ctx->pc = 0x19231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x192320: 0x27a50950  addiu       $a1, $sp, 0x950
    ctx->pc = 0x192320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
    // 0x192324: 0x8f828acc  lw          $v0, -0x7534($gp)
    ctx->pc = 0x192324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937292)));
    // 0x192328: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x192328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19232c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x192330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x192330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192334: 0xafa30950  sw          $v1, 0x950($sp)
    ctx->pc = 0x192334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2384), GPR_U32(ctx, 3));
    // 0x192338: 0xc064240  jal         func_190900
    ctx->pc = 0x192338u;
    SET_GPR_U32(ctx, 31, 0x192340u);
    ctx->pc = 0x19233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192338u;
            // 0x19233c: 0xafa20998  sw          $v0, 0x998($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192340u; }
        if (ctx->pc != 0x192340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192340u; }
        if (ctx->pc != 0x192340u) { return; }
    }
    ctx->pc = 0x192340u;
label_192340:
    // 0x192340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192344:
    // 0x192344: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_192348:
    // 0x192348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x192348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19234c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19234cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192358: 0x3e00008  jr          $ra
    ctx->pc = 0x192358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192358u;
            // 0x19235c: 0x27bd09b0  addiu       $sp, $sp, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192360u;
}
