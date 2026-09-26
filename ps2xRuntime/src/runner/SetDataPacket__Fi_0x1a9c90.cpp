#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDataPacket__Fi
// Address: 0x1a9c90 - 0x1a9ec4
void SetDataPacket__Fi_0x1a9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDataPacket__Fi_0x1a9c90");
#endif

    switch (ctx->pc) {
        case 0x1a9cccu: goto label_1a9ccc;
        case 0x1a9ce8u: goto label_1a9ce8;
        case 0x1a9cfcu: goto label_1a9cfc;
        case 0x1a9d10u: goto label_1a9d10;
        case 0x1a9d28u: goto label_1a9d28;
        case 0x1a9d64u: goto label_1a9d64;
        case 0x1a9d90u: goto label_1a9d90;
        case 0x1a9da0u: goto label_1a9da0;
        case 0x1a9db0u: goto label_1a9db0;
        case 0x1a9de0u: goto label_1a9de0;
        case 0x1a9df4u: goto label_1a9df4;
        case 0x1a9e08u: goto label_1a9e08;
        case 0x1a9e18u: goto label_1a9e18;
        case 0x1a9e2cu: goto label_1a9e2c;
        case 0x1a9e3cu: goto label_1a9e3c;
        case 0x1a9e50u: goto label_1a9e50;
        case 0x1a9e70u: goto label_1a9e70;
        case 0x1a9eacu: goto label_1a9eac;
        default: break;
    }

    ctx->pc = 0x1a9c90u;

    // 0x1a9c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ca0: 0x16200023  bnez        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A9CA0u;
    {
        const bool branch_taken_0x1a9ca0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CA0u;
            // 0x1a9ca4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ca0) {
            ctx->pc = 0x1A9D30u;
            goto label_1a9d30;
        }
    }
    ctx->pc = 0x1A9CA8u;
    // 0x1a9ca8: 0x8f828ac0  lw          $v0, -0x7540($gp)
    ctx->pc = 0x1a9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1a9cac: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x1a9cb0: 0x3421c780  ori         $at, $at, 0xC780
    ctx->pc = 0x1a9cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51072);
    // 0x1a9cb4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9cb8: 0x2484e900  addiu       $a0, $a0, -0x1700
    ctx->pc = 0x1a9cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961408));
    // 0x1a9cbc: 0x24061388  addiu       $a2, $zero, 0x1388
    ctx->pc = 0x1a9cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1a9cc0: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x1a9cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1a9cc4: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1A9CC4u;
    SET_GPR_U32(ctx, 31, 0x1A9CCCu);
    ctx->pc = 0x1A9CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CC4u;
            // 0x1a9cc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CCCu; }
        if (ctx->pc != 0x1A9CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CCCu; }
        if (ctx->pc != 0x1A9CCCu) { return; }
    }
    ctx->pc = 0x1A9CCCu;
label_1a9ccc:
    // 0x1a9ccc: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x1a9cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x1a9cd0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9cd4: 0x3421c780  ori         $at, $at, 0xC780
    ctx->pc = 0x1a9cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51072);
    // 0x1a9cd8: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x1a9cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
    // 0x1a9cdc: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x1a9cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1a9ce0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1A9CE0u;
    SET_GPR_U32(ctx, 31, 0x1A9CE8u);
    ctx->pc = 0x1A9CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CE0u;
            // 0x1a9ce4: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CE8u; }
        if (ctx->pc != 0x1A9CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CE8u; }
        if (ctx->pc != 0x1A9CE8u) { return; }
    }
    ctx->pc = 0x1A9CE8u;
label_1a9ce8:
    // 0x1a9ce8: 0x8f848cb4  lw          $a0, -0x734C($gp)
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
    // 0x1a9cec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9cf0: 0x8f858cb8  lw          $a1, -0x7348($gp)
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x1a9cf4: 0xc050784  jal         func_141E10
    ctx->pc = 0x1A9CF4u;
    SET_GPR_U32(ctx, 31, 0x1A9CFCu);
    ctx->pc = 0x1A9CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CF4u;
            // 0x1a9cf8: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CFCu; }
        if (ctx->pc != 0x1A9CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9CFCu; }
        if (ctx->pc != 0x1A9CFCu) { return; }
    }
    ctx->pc = 0x1A9CFCu;
label_1a9cfc:
    // 0x1a9cfc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d00: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d04: 0x2484e840  addiu       $a0, $a0, -0x17C0
    ctx->pc = 0x1a9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
    // 0x1a9d08: 0xc0507bc  jal         func_141EF0
    ctx->pc = 0x1A9D08u;
    SET_GPR_U32(ctx, 31, 0x1A9D10u);
    ctx->pc = 0x1A9D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D08u;
            // 0x1a9d0c: 0x24a5e870  addiu       $a1, $a1, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D10u; }
        if (ctx->pc != 0x1A9D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D10u; }
        if (ctx->pc != 0x1A9D10u) { return; }
    }
    ctx->pc = 0x1A9D10u;
label_1a9d10:
    // 0x1a9d10: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d14: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a9d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d18: 0x2484e900  addiu       $a0, $a0, -0x1700
    ctx->pc = 0x1a9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961408));
    // 0x1a9d1c: 0x24a5e930  addiu       $a1, $a1, -0x16D0
    ctx->pc = 0x1a9d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    // 0x1a9d20: 0xc050810  jal         func_142040
    ctx->pc = 0x1A9D20u;
    SET_GPR_U32(ctx, 31, 0x1A9D28u);
    ctx->pc = 0x1A9D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D20u;
            // 0x1a9d24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D28u; }
        if (ctx->pc != 0x1A9D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D28u; }
        if (ctx->pc != 0x1A9D28u) { return; }
    }
    ctx->pc = 0x1A9D28u;
label_1a9d28:
    // 0x1a9d28: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1A9D28u;
    {
        const bool branch_taken_0x1a9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D28u;
            // 0x1a9d2c: 0xaf9180f4  sw          $s1, -0x7F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934772), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d28) {
            ctx->pc = 0x1A9EB0u;
            goto label_1a9eb0;
        }
    }
    ctx->pc = 0x1A9D30u;
label_1a9d30:
    // 0x1a9d30: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a9d34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9d38: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9D38u;
    {
        const bool branch_taken_0x1a9d38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D38u;
            // 0x1a9d3c: 0x34701170  ori         $s0, $v1, 0x1170 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d38) {
            ctx->pc = 0x1A9D44u;
            goto label_1a9d44;
        }
    }
    ctx->pc = 0x1A9D40u;
    // 0x1a9d40: 0x3470c138  ori         $s0, $v1, 0xC138
    ctx->pc = 0x1a9d40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49464);
label_1a9d44:
    // 0x1a9d44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a9d48: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9D48u;
    {
        const bool branch_taken_0x1a9d48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D48u;
            // 0x1a9d4c: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d48) {
            ctx->pc = 0x1A9D58u;
            goto label_1a9d58;
        }
    }
    ctx->pc = 0x1A9D50u;
    // 0x1a9d50: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1a9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1a9d54: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1a9d58:
    // 0x1a9d58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1a9d5c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1A9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D64u);
    ctx->pc = 0x1A9D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D5Cu;
            // 0x1a9d60: 0x24846170  addiu       $a0, $a0, 0x6170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D64u; }
        if (ctx->pc != 0x1A9D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D64u; }
        if (ctx->pc != 0x1A9D64u) { return; }
    }
    ctx->pc = 0x1A9D64u;
label_1a9d64:
    // 0x1a9d64: 0x8f8280f4  lw          $v0, -0x7F0C($gp)
    ctx->pc = 0x1a9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x1a9d68: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9D68u;
    {
        const bool branch_taken_0x1a9d68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d68) {
            ctx->pc = 0x1A9DC0u;
            goto label_1a9dc0;
        }
    }
    ctx->pc = 0x1A9D70u;
    // 0x1a9d70: 0x8f858cc8  lw          $a1, -0x7338($gp)
    ctx->pc = 0x1a9d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937800)));
    // 0x1a9d74: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d78: 0xac20ea74  sw          $zero, -0x158C($at)
    ctx->pc = 0x1a9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961780), GPR_U32(ctx, 0));
    // 0x1a9d7c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d80: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d84: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x1a9d88: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1A9D88u;
    SET_GPR_U32(ctx, 31, 0x1A9D90u);
    ctx->pc = 0x1A9D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D88u;
            // 0x1a9d8c: 0xac20ea6c  sw          $zero, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D90u; }
        if (ctx->pc != 0x1A9D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D90u; }
        if (ctx->pc != 0x1A9D90u) { return; }
    }
    ctx->pc = 0x1A9D90u;
label_1a9d90:
    // 0x1a9d90: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d98: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1A9D98u;
    SET_GPR_U32(ctx, 31, 0x1A9DA0u);
    ctx->pc = 0x1A9D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D98u;
            // 0x1a9d9c: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DA0u; }
        if (ctx->pc != 0x1A9DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DA0u; }
        if (ctx->pc != 0x1A9DA0u) { return; }
    }
    ctx->pc = 0x1A9DA0u;
label_1a9da0:
    // 0x1a9da0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9da8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1A9DA8u;
    SET_GPR_U32(ctx, 31, 0x1A9DB0u);
    ctx->pc = 0x1A9DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DA8u;
            // 0x1a9dac: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DB0u; }
        if (ctx->pc != 0x1A9DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DB0u; }
        if (ctx->pc != 0x1A9DB0u) { return; }
    }
    ctx->pc = 0x1A9DB0u;
label_1a9db0:
    // 0x1a9db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9db4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9db8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1A9DB8u;
    {
        const bool branch_taken_0x1a9db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DB8u;
            // 0x1a9dbc: 0xac23ea6c  sw          $v1, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9db8) {
            ctx->pc = 0x1A9EB0u;
            goto label_1a9eb0;
        }
    }
    ctx->pc = 0x1A9DC0u;
label_1a9dc0:
    // 0x1a9dc0: 0x8f858cc8  lw          $a1, -0x7338($gp)
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937800)));
    // 0x1a9dc4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9dc8: 0xac20ea74  sw          $zero, -0x158C($at)
    ctx->pc = 0x1a9dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961780), GPR_U32(ctx, 0));
    // 0x1a9dcc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9dd0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9dd4: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x1a9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x1a9dd8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1A9DD8u;
    SET_GPR_U32(ctx, 31, 0x1A9DE0u);
    ctx->pc = 0x1A9DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DD8u;
            // 0x1a9ddc: 0xac20ea6c  sw          $zero, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DE0u; }
        if (ctx->pc != 0x1A9DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DE0u; }
        if (ctx->pc != 0x1A9DE0u) { return; }
    }
    ctx->pc = 0x1A9DE0u;
label_1a9de0:
    // 0x1a9de0: 0x8f848cb4  lw          $a0, -0x734C($gp)
    ctx->pc = 0x1a9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
    // 0x1a9de4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9de8: 0x8f858cb8  lw          $a1, -0x7348($gp)
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x1a9dec: 0xc050784  jal         func_141E10
    ctx->pc = 0x1A9DECu;
    SET_GPR_U32(ctx, 31, 0x1A9DF4u);
    ctx->pc = 0x1A9DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DECu;
            // 0x1a9df0: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DF4u; }
        if (ctx->pc != 0x1A9DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DF4u; }
        if (ctx->pc != 0x1A9DF4u) { return; }
    }
    ctx->pc = 0x1A9DF4u;
label_1a9df4:
    // 0x1a9df4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9df8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a9dfc: 0x2484e840  addiu       $a0, $a0, -0x17C0
    ctx->pc = 0x1a9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
    // 0x1a9e00: 0xc0507bc  jal         func_141EF0
    ctx->pc = 0x1A9E00u;
    SET_GPR_U32(ctx, 31, 0x1A9E08u);
    ctx->pc = 0x1A9E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E00u;
            // 0x1a9e04: 0x24a5e870  addiu       $a1, $a1, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E08u; }
        if (ctx->pc != 0x1A9E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E08u; }
        if (ctx->pc != 0x1A9E08u) { return; }
    }
    ctx->pc = 0x1A9E08u;
label_1a9e08:
    // 0x1a9e08: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1A9E10u;
    SET_GPR_U32(ctx, 31, 0x1A9E18u);
    ctx->pc = 0x1A9E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E10u;
            // 0x1a9e14: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E18u; }
        if (ctx->pc != 0x1A9E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E18u; }
        if (ctx->pc != 0x1A9E18u) { return; }
    }
    ctx->pc = 0x1A9E18u;
label_1a9e18:
    // 0x1a9e18: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a9e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e20: 0x2484e8a0  addiu       $a0, $a0, -0x1760
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961312));
    // 0x1a9e24: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1A9E24u;
    SET_GPR_U32(ctx, 31, 0x1A9E2Cu);
    ctx->pc = 0x1A9E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E24u;
            // 0x1a9e28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E2Cu; }
        if (ctx->pc != 0x1A9E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E2Cu; }
        if (ctx->pc != 0x1A9E2Cu) { return; }
    }
    ctx->pc = 0x1A9E2Cu;
label_1a9e2c:
    // 0x1a9e2c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e34: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1A9E34u;
    SET_GPR_U32(ctx, 31, 0x1A9E3Cu);
    ctx->pc = 0x1A9E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E34u;
            // 0x1a9e38: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E3Cu; }
        if (ctx->pc != 0x1A9E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E3Cu; }
        if (ctx->pc != 0x1A9E3Cu) { return; }
    }
    ctx->pc = 0x1A9E3Cu;
label_1a9e3c:
    // 0x1a9e3c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a9e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a9e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e48: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1A9E48u;
    SET_GPR_U32(ctx, 31, 0x1A9E50u);
    ctx->pc = 0x1A9E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E48u;
            // 0x1a9e4c: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E50u; }
        if (ctx->pc != 0x1A9E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E50u; }
        if (ctx->pc != 0x1A9E50u) { return; }
    }
    ctx->pc = 0x1A9E50u;
label_1a9e50:
    // 0x1a9e50: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e54: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9e5c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e60: 0x2484e8a0  addiu       $a0, $a0, -0x1760
    ctx->pc = 0x1a9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961312));
    // 0x1a9e64: 0xac26ea6c  sw          $a2, -0x1594($at)
    ctx->pc = 0x1a9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 6));
    // 0x1a9e68: 0xc050810  jal         func_142040
    ctx->pc = 0x1A9E68u;
    SET_GPR_U32(ctx, 31, 0x1A9E70u);
    ctx->pc = 0x1A9E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E68u;
            // 0x1a9e6c: 0x24a5e8d0  addiu       $a1, $a1, -0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E70u; }
        if (ctx->pc != 0x1A9E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E70u; }
        if (ctx->pc != 0x1A9E70u) { return; }
    }
    ctx->pc = 0x1A9E70u;
label_1a9e70:
    // 0x1a9e70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e74: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1a9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1a9e78: 0x8c26e8c4  lw          $a2, -0x173C($at)
    ctx->pc = 0x1a9e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961348)));
    // 0x1a9e7c: 0x24846190  addiu       $a0, $a0, 0x6190
    ctx->pc = 0x1a9e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24976));
    // 0x1a9e80: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e84: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a9e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a9e88: 0x8c25e8c0  lw          $a1, -0x1740($at)
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961344)));
    // 0x1a9e8c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a9e94: 0x8c23e8f4  lw          $v1, -0x170C($at)
    ctx->pc = 0x1a9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961396)));
    // 0x1a9e98: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a9e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a9e9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a9ea0: 0x8c22e8f0  lw          $v0, -0x1710($at)
    ctx->pc = 0x1a9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961392)));
    // 0x1a9ea4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1A9EA4u;
    SET_GPR_U32(ctx, 31, 0x1A9EACu);
    ctx->pc = 0x1A9EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EA4u;
            // 0x1a9ea8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EACu; }
        if (ctx->pc != 0x1A9EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EACu; }
        if (ctx->pc != 0x1A9EACu) { return; }
    }
    ctx->pc = 0x1A9EACu;
label_1a9eac:
    // 0x1a9eac: 0xaf9180f4  sw          $s1, -0x7F0C($gp)
    ctx->pc = 0x1a9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934772), GPR_U32(ctx, 17));
label_1a9eb0:
    // 0x1a9eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EBCu;
            // 0x1a9ec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9EC4u;
}
