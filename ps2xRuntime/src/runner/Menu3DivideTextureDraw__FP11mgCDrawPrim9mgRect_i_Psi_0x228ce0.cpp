#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect<i>Psi
// Address: 0x228ce0 - 0x228e80
void Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0");
#endif

    switch (ctx->pc) {
        case 0x228d74u: goto label_228d74;
        case 0x228dccu: goto label_228dcc;
        case 0x228decu: goto label_228dec;
        case 0x228dfcu: goto label_228dfc;
        default: break;
    }

    ctx->pc = 0x228ce0u;

    // 0x228ce0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x228ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x228ce4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x228ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x228ce8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x228ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x228cec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x228cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x228cf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x228cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x228cf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x228cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x228cf8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x228cf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x228cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x228d00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x228d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x228d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x228d08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x228d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228d14: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x228d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228d18: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x228D18u;
    {
        const bool branch_taken_0x228d18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x228D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228D18u;
            // 0x228d1c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d18) {
            ctx->pc = 0x228D40u;
            goto label_228d40;
        }
    }
    ctx->pc = 0x228D20u;
    // 0x228d20: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x228d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x228d24: 0x86840006  lh          $a0, 0x6($s4)
    ctx->pc = 0x228d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x228d28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228d2c: 0x86820016  lh          $v0, 0x16($s4)
    ctx->pc = 0x228d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x228d30: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x228d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x228d34: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x228d34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x228d38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x228D38u;
    {
        const bool branch_taken_0x228d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228D38u;
            // 0x228d3c: 0x62b023  subu        $s6, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d38) {
            ctx->pc = 0x228D5Cu;
            goto label_228d5c;
        }
    }
    ctx->pc = 0x228D40u;
label_228d40:
    // 0x228d40: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x228d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x228d44: 0x86840004  lh          $a0, 0x4($s4)
    ctx->pc = 0x228d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x228d48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228d4c: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x228d4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x228d50: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x228d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x228d54: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x228d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x228d58: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x228d58u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_228d5c:
    // 0x228d5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x228d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x228d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d6c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x228D6Cu;
    SET_GPR_U32(ctx, 31, 0x228D74u);
    ctx->pc = 0x228D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228D6Cu;
            // 0x228d70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D74u; }
        if (ctx->pc != 0x228D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D74u; }
        if (ctx->pc != 0x228D74u) { return; }
    }
    ctx->pc = 0x228D74u;
label_228d74:
    // 0x228d74: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x228d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x228d78: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x228d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x228d7c: 0x2463cf50  addiu       $v1, $v1, -0x30B0
    ctx->pc = 0x228d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954832));
    // 0x228d80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x228d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x228d84: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x228d84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228d88: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x228d8c: 0x245000a0  addiu       $s0, $v0, 0xA0
    ctx->pc = 0x228d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x228d90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x228d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d98: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x228d98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x228d9c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x228d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x228da0: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x228da0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x228da4: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x228da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x228da8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x228da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x228dac: 0xafb600a4  sw          $s6, 0xA4($sp)
    ctx->pc = 0x228dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 22));
    // 0x228db0: 0x86820016  lh          $v0, 0x16($s4)
    ctx->pc = 0x228db0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x228db4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x228db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x228db8: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x228db8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x228dbc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x228dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x228dc0: 0xafb600b4  sw          $s6, 0xB4($sp)
    ctx->pc = 0x228dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 22));
    // 0x228dc4: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x228dc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x228dc8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x228dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_228dcc:
    // 0x228dcc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x228dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x228dd0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x228dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x228dd4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x228dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228dd8: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x228dd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x228ddc: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x228ddcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228de0: 0x84480006  lh          $t0, 0x6($v0)
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x228de4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x228DE4u;
    SET_GPR_U32(ctx, 31, 0x228DECu);
    ctx->pc = 0x228DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228DE4u;
            // 0x228de8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DECu; }
        if (ctx->pc != 0x228DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DECu; }
        if (ctx->pc != 0x228DECu) { return; }
    }
    ctx->pc = 0x228DECu;
label_228dec:
    // 0x228dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x228decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228df0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x228df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x228df4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x228DF4u;
    SET_GPR_U32(ctx, 31, 0x228DFCu);
    ctx->pc = 0x228DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228DF4u;
            // 0x228df8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DFCu; }
        if (ctx->pc != 0x228DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DFCu; }
        if (ctx->pc != 0x228DFCu) { return; }
    }
    ctx->pc = 0x228DFCu;
label_228dfc:
    // 0x228dfc: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x228DFCu;
    {
        const bool branch_taken_0x228dfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228DFCu;
            // 0x228e00: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dfc) {
            ctx->pc = 0x228E20u;
            goto label_228e20;
        }
    }
    ctx->pc = 0x228E04u;
    // 0x228e04: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x228e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x228e08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228e0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x228e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x228e10: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x228e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x228e14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x228e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x228e18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228E18u;
    {
        const bool branch_taken_0x228e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E18u;
            // 0x228e1c: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e18) {
            ctx->pc = 0x228E44u;
            goto label_228e44;
        }
    }
    ctx->pc = 0x228E20u;
label_228e20:
    // 0x228e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228e24: 0x16630007  bne         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x228E24u;
    {
        const bool branch_taken_0x228e24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x228E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E24u;
            // 0x228e28: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e24) {
            ctx->pc = 0x228E44u;
            goto label_228e44;
        }
    }
    ctx->pc = 0x228E2Cu;
    // 0x228e2c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x228e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228e30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228e34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x228e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x228e38: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x228e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x228e3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x228e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x228e40: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x228e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_228e44:
    // 0x228e44: 0x0  nop
    ctx->pc = 0x228e44u;
    // NOP
    // 0x228e48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228e4c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x228e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x228e50: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x228E50u;
    {
        const bool branch_taken_0x228e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E50u;
            // 0x228e54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e50) {
            ctx->pc = 0x228DCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228dcc;
        }
    }
    ctx->pc = 0x228E58u;
    // 0x228e58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x228e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228e5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x228e5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228e60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x228e60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228e64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x228e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228e68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x228e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228e6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x228e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228e78: 0x3e00008  jr          $ra
    ctx->pc = 0x228E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E78u;
            // 0x228e7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228E80u;
}
