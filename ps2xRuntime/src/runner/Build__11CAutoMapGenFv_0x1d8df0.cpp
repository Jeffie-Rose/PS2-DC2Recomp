#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Build__11CAutoMapGenFv
// Address: 0x1d8df0 - 0x1d8fd4
void Build__11CAutoMapGenFv_0x1d8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Build__11CAutoMapGenFv_0x1d8df0");
#endif

    switch (ctx->pc) {
        case 0x1d8e38u: goto label_1d8e38;
        case 0x1d8e40u: goto label_1d8e40;
        case 0x1d8e78u: goto label_1d8e78;
        case 0x1d8ea0u: goto label_1d8ea0;
        case 0x1d8ed8u: goto label_1d8ed8;
        case 0x1d8ef0u: goto label_1d8ef0;
        case 0x1d8f20u: goto label_1d8f20;
        case 0x1d8f28u: goto label_1d8f28;
        case 0x1d8f4cu: goto label_1d8f4c;
        case 0x1d8f60u: goto label_1d8f60;
        case 0x1d8f6cu: goto label_1d8f6c;
        case 0x1d8f80u: goto label_1d8f80;
        case 0x1d8f98u: goto label_1d8f98;
        default: break;
    }

    ctx->pc = 0x1d8df0u;

    // 0x1d8df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8df8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d8df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d8dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8e04: 0xa482003a  sh          $v0, 0x3A($a0)
    ctx->pc = 0x1d8e04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8e08: 0xac820284  sw          $v0, 0x284($a0)
    ctx->pc = 0x1d8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 2));
    // 0x1d8e0c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1d8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d8e10: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1d8e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d8e14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8E14u;
    {
        const bool branch_taken_0x1d8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E14u;
            // 0x1d8e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e14) {
            ctx->pc = 0x1D8E48u;
            goto label_1d8e48;
        }
    }
    ctx->pc = 0x1D8E1Cu;
    // 0x1d8e1c: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x1d8e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e24: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d8e28: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1d8e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8e2c: 0xa60201b8  sh          $v0, 0x1B8($s0)
    ctx->pc = 0x1d8e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8e30: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x1D8E30u;
    SET_GPR_U32(ctx, 31, 0x1D8E38u);
    ctx->pc = 0x1D8E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E30u;
            // 0x1d8e34: 0xa60301ba  sh          $v1, 0x1BA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D87C0u;
    if (runtime->hasFunction(0x1D87C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D87C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E38u; }
        if (ctx->pc != 0x1D8E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatFixedMap__11CAutoMapGenFi_0x1d87c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E38u; }
        if (ctx->pc != 0x1D8E38u) { return; }
    }
    ctx->pc = 0x1D8E38u;
label_1d8e38:
    // 0x1d8e38: 0xc07608c  jal         func_1D8230
    ctx->pc = 0x1D8E38u;
    SET_GPR_U32(ctx, 31, 0x1D8E40u);
    ctx->pc = 0x1D8E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E38u;
            // 0x1d8e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8230u;
    if (runtime->hasFunction(0x1D8230u)) {
        auto targetFn = runtime->lookupFunction(0x1D8230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E40u; }
        if (ctx->pc != 0x1D8E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IndexToPartsPlace__11CAutoMapGenFv_0x1d8230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E40u; }
        if (ctx->pc != 0x1D8E40u) { return; }
    }
    ctx->pc = 0x1D8E40u;
label_1d8e40:
    // 0x1d8e40: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1D8E40u;
    {
        const bool branch_taken_0x1d8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E40u;
            // 0x1d8e44: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e40) {
            ctx->pc = 0x1D8FC4u;
            goto label_1d8fc4;
        }
    }
    ctx->pc = 0x1D8E48u;
label_1d8e48:
    // 0x1d8e48: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d8e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d8e4c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D8E4Cu;
    {
        const bool branch_taken_0x1d8e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E4Cu;
            // 0x1d8e50: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e4c) {
            ctx->pc = 0x1D8F30u;
            goto label_1d8f30;
        }
    }
    ctx->pc = 0x1D8E54u;
    // 0x1d8e54: 0x8f838da8  lw          $v1, -0x7258($gp)
    ctx->pc = 0x1d8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x1d8e58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1d8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1d8e5c: 0x24847e68  addiu       $a0, $a0, 0x7E68
    ctx->pc = 0x1d8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32360));
    // 0x1d8e60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8e6c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1d8e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8e70: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1D8E70u;
    SET_GPR_U32(ctx, 31, 0x1D8E78u);
    ctx->pc = 0x1D8E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E70u;
            // 0x1d8e74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E78u; }
        if (ctx->pc != 0x1D8E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E78u; }
        if (ctx->pc != 0x1D8E78u) { return; }
    }
    ctx->pc = 0x1D8E78u;
label_1d8e78:
    // 0x1d8e78: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x1d8e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d8e7c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8E7Cu;
    {
        const bool branch_taken_0x1d8e7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E7Cu;
            // 0x1d8e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e7c) {
            ctx->pc = 0x1D8EA4u;
            goto label_1d8ea4;
        }
    }
    ctx->pc = 0x1D8E84u;
    // 0x1d8e84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8e88: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8E88u;
    {
        const bool branch_taken_0x1d8e88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E88u;
            // 0x1d8e8c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e88) {
            ctx->pc = 0x1D8E98u;
            goto label_1d8e98;
        }
    }
    ctx->pc = 0x1D8E90u;
    // 0x1d8e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8E90u;
    {
        const bool branch_taken_0x1d8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E90u;
            // 0x1d8e94: 0x2a210013  slti        $at, $s1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e90) {
            ctx->pc = 0x1D8EA8u;
            goto label_1d8ea8;
        }
    }
    ctx->pc = 0x1D8E98u;
label_1d8e98:
    // 0x1d8e98: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8E98u;
    SET_GPR_U32(ctx, 31, 0x1D8EA0u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EA0u; }
        if (ctx->pc != 0x1D8EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EA0u; }
        if (ctx->pc != 0x1D8EA0u) { return; }
    }
    ctx->pc = 0x1D8EA0u;
label_1d8ea0:
    // 0x1d8ea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8ea4:
    // 0x1d8ea4: 0x2a210013  slti        $at, $s1, 0x13
    ctx->pc = 0x1d8ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
label_1d8ea8:
    // 0x1d8ea8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8EA8u;
    {
        const bool branch_taken_0x1d8ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EA8u;
            // 0x1d8eac: 0x2a230013  slti        $v1, $s1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ea8) {
            ctx->pc = 0x1D8EE0u;
            goto label_1d8ee0;
        }
    }
    ctx->pc = 0x1D8EB0u;
    // 0x1d8eb0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1d8eb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d8eb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8EB4u;
    {
        const bool branch_taken_0x1d8eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8eb4) {
            ctx->pc = 0x1D8EDCu;
            goto label_1d8edc;
        }
    }
    ctx->pc = 0x1D8EBCu;
    // 0x1d8ebc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d8ec0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8EC0u;
    {
        const bool branch_taken_0x1d8ec0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EC0u;
            // 0x1d8ec4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ec0) {
            ctx->pc = 0x1D8ED0u;
            goto label_1d8ed0;
        }
    }
    ctx->pc = 0x1D8EC8u;
    // 0x1d8ec8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8EC8u;
    {
        const bool branch_taken_0x1d8ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EC8u;
            // 0x1d8ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ec8) {
            ctx->pc = 0x1D8EDCu;
            goto label_1d8edc;
        }
    }
    ctx->pc = 0x1D8ED0u;
label_1d8ed0:
    // 0x1d8ed0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8ED0u;
    SET_GPR_U32(ctx, 31, 0x1D8ED8u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8ED8u; }
        if (ctx->pc != 0x1D8ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8ED8u; }
        if (ctx->pc != 0x1D8ED8u) { return; }
    }
    ctx->pc = 0x1D8ED8u;
label_1d8ed8:
    // 0x1d8ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8edc:
    // 0x1d8edc: 0x2a230013  slti        $v1, $s1, 0x13
    ctx->pc = 0x1d8edcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
label_1d8ee0:
    // 0x1d8ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8EE0u;
    {
        const bool branch_taken_0x1d8ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EE0u;
            // 0x1d8ee4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ee0) {
            ctx->pc = 0x1D8EF0u;
            goto label_1d8ef0;
        }
    }
    ctx->pc = 0x1D8EE8u;
    // 0x1d8ee8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D8EE8u;
    SET_GPR_U32(ctx, 31, 0x1D8EF0u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EF0u; }
        if (ctx->pc != 0x1D8EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EF0u; }
        if (ctx->pc != 0x1D8EF0u) { return; }
    }
    ctx->pc = 0x1D8EF0u;
label_1d8ef0:
    // 0x1d8ef0: 0x8e0601c4  lw          $a2, 0x1C4($s0)
    ctx->pc = 0x1d8ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x1d8ef4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d8ef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d8f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8f0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d8f10: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8f14: 0xa60201b8  sh          $v0, 0x1B8($s0)
    ctx->pc = 0x1d8f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8f18: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x1D8F18u;
    SET_GPR_U32(ctx, 31, 0x1D8F20u);
    ctx->pc = 0x1D8F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F18u;
            // 0x1d8f1c: 0xa60301ba  sh          $v1, 0x1BA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D87C0u;
    if (runtime->hasFunction(0x1D87C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D87C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F20u; }
        if (ctx->pc != 0x1D8F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatFixedMap__11CAutoMapGenFi_0x1d87c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F20u; }
        if (ctx->pc != 0x1D8F20u) { return; }
    }
    ctx->pc = 0x1D8F20u;
label_1d8f20:
    // 0x1d8f20: 0xc07608c  jal         func_1D8230
    ctx->pc = 0x1D8F20u;
    SET_GPR_U32(ctx, 31, 0x1D8F28u);
    ctx->pc = 0x1D8F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F20u;
            // 0x1d8f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8230u;
    if (runtime->hasFunction(0x1D8230u)) {
        auto targetFn = runtime->lookupFunction(0x1D8230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F28u; }
        if (ctx->pc != 0x1D8F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IndexToPartsPlace__11CAutoMapGenFv_0x1d8230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F28u; }
        if (ctx->pc != 0x1D8F28u) { return; }
    }
    ctx->pc = 0x1D8F28u;
label_1d8f28:
    // 0x1d8f28: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D8F28u;
    {
        const bool branch_taken_0x1d8f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f28) {
            ctx->pc = 0x1D8FC0u;
            goto label_1d8fc0;
        }
    }
    ctx->pc = 0x1D8F30u;
label_1d8f30:
    // 0x1d8f30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8F30u;
    {
        const bool branch_taken_0x1d8f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F30u;
            // 0x1d8f34: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f30) {
            ctx->pc = 0x1D8F54u;
            goto label_1d8f54;
        }
    }
    ctx->pc = 0x1D8F38u;
    // 0x1d8f38: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d8f3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d8f40: 0xa60301b8  sh          $v1, 0x1B8($s0)
    ctx->pc = 0x1d8f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d8f44: 0xc076270  jal         func_1D89C0
    ctx->pc = 0x1D8F44u;
    SET_GPR_U32(ctx, 31, 0x1D8F4Cu);
    ctx->pc = 0x1D8F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F44u;
            // 0x1d8f48: 0xa60201ba  sh          $v0, 0x1BA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89C0u;
    if (runtime->hasFunction(0x1D89C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F4Cu; }
        if (ctx->pc != 0x1D8F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RandomMapMainProc__11CAutoMapGenFv_0x1d89c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F4Cu; }
        if (ctx->pc != 0x1D8F4Cu) { return; }
    }
    ctx->pc = 0x1D8F4Cu;
label_1d8f4c:
    // 0x1d8f4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D8F4Cu;
    {
        const bool branch_taken_0x1d8f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f4c) {
            ctx->pc = 0x1D8FC0u;
            goto label_1d8fc0;
        }
    }
    ctx->pc = 0x1D8F54u;
label_1d8f54:
    // 0x1d8f54: 0xa60201b8  sh          $v0, 0x1B8($s0)
    ctx->pc = 0x1d8f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8f58: 0xc076270  jal         func_1D89C0
    ctx->pc = 0x1D8F58u;
    SET_GPR_U32(ctx, 31, 0x1D8F60u);
    ctx->pc = 0x1D8F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F58u;
            // 0x1d8f5c: 0xa60201ba  sh          $v0, 0x1BA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89C0u;
    if (runtime->hasFunction(0x1D89C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F60u; }
        if (ctx->pc != 0x1D8F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RandomMapMainProc__11CAutoMapGenFv_0x1d89c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F60u; }
        if (ctx->pc != 0x1D8F60u) { return; }
    }
    ctx->pc = 0x1D8F60u;
label_1d8f60:
    // 0x1d8f60: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d8f64: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1D8F64u;
    SET_GPR_U32(ctx, 31, 0x1D8F6Cu);
    ctx->pc = 0x1D8F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F64u;
            // 0x1d8f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F6Cu; }
        if (ctx->pc != 0x1D8F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F6Cu; }
        if (ctx->pc != 0x1D8F6Cu) { return; }
    }
    ctx->pc = 0x1D8F6Cu;
label_1d8f6c:
    // 0x1d8f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f70: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8F70u;
    {
        const bool branch_taken_0x1d8f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F70u;
            // 0x1d8f74: 0x260501d0  addiu       $a1, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f70) {
            ctx->pc = 0x1D8FBCu;
            goto label_1d8fbc;
        }
    }
    ctx->pc = 0x1D8F78u;
    // 0x1d8f78: 0xc0572f4  jal         func_15CBD0
    ctx->pc = 0x1D8F78u;
    SET_GPR_U32(ctx, 31, 0x1D8F80u);
    ctx->pc = 0x15CBD0u;
    if (runtime->hasFunction(0x15CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F80u; }
        if (ctx->pc != 0x1D8F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlacPartsTable__4CMapFPi_0x15cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F80u; }
        if (ctx->pc != 0x1D8F80u) { return; }
    }
    ctx->pc = 0x1D8F80u;
label_1d8f80:
    // 0x1d8f80: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x1d8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x1d8f84: 0x8e0301d0  lw          $v1, 0x1D0($s0)
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x1d8f88: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8F88u;
    {
        const bool branch_taken_0x1d8f88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D8F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F88u;
            // 0x1d8f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f88) {
            ctx->pc = 0x1D8FBCu;
            goto label_1d8fbc;
        }
    }
    ctx->pc = 0x1D8F90u;
    // 0x1d8f90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8F90u;
    {
        const bool branch_taken_0x1d8f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f90) {
            ctx->pc = 0x1D8FA8u;
            goto label_1d8fa8;
        }
    }
    ctx->pc = 0x1D8F98u;
label_1d8f98:
    // 0x1d8f98: 0x8e0301d0  lw          $v1, 0x1D0($s0)
    ctx->pc = 0x1d8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x1d8f9c: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x1d8f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x1d8fa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d8fa4: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x1d8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
label_1d8fa8:
    // 0x1d8fa8: 0x80830070  lb          $v1, 0x70($a0)
    ctx->pc = 0x1d8fa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1d8fac: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1d8facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1d8fb0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1d8fb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d8fb4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D8FB4u;
    {
        const bool branch_taken_0x1d8fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fb4) {
            ctx->pc = 0x1D8F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8f98;
        }
    }
    ctx->pc = 0x1D8FBCu;
label_1d8fbc:
    // 0x1d8fbc: 0x0  nop
    ctx->pc = 0x1d8fbcu;
    // NOP
label_1d8fc0:
    // 0x1d8fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d8fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8fc4:
    // 0x1d8fc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FCCu;
            // 0x1d8fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8FD4u;
}
