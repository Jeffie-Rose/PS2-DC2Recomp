#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEffectReadType__13CGameDataUsedFPPcPPcPi
// Address: 0x197e70 - 0x197f4c
void GetEffectReadType__13CGameDataUsedFPPcPPcPi_0x197e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEffectReadType__13CGameDataUsedFPPcPPcPi_0x197e70");
#endif

    switch (ctx->pc) {
        case 0x197eb4u: goto label_197eb4;
        case 0x197ec8u: goto label_197ec8;
        default: break;
    }

    ctx->pc = 0x197e70u;

    // 0x197e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197e74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197e78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x197e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x197e7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x197e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x197e80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197e84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197e88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x197e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197e90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x197e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197e98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x197e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e9c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x197e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197ea0: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x197EA0u;
    {
        const bool branch_taken_0x197ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197EA0u;
            // 0x197ea4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ea0) {
            ctx->pc = 0x197F28u;
            goto label_197f28;
        }
    }
    ctx->pc = 0x197EA8u;
    // 0x197ea8: 0x82740004  lb          $s4, 0x4($s3)
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x197eac: 0xc065710  jal         func_195C40
    ctx->pc = 0x197EACu;
    SET_GPR_U32(ctx, 31, 0x197EB4u);
    ctx->pc = 0x197EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EACu;
            // 0x197eb0: 0x86640002  lh          $a0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EB4u; }
        if (ctx->pc != 0x197EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EB4u; }
        if (ctx->pc != 0x197EB4u) { return; }
    }
    ctx->pc = 0x197EB4u;
label_197eb4:
    // 0x197eb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x197eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197eb8: 0x1682001c  bne         $s4, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x197EB8u;
    {
        const bool branch_taken_0x197eb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x197EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197EB8u;
            // 0x197ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197eb8) {
            ctx->pc = 0x197F2Cu;
            goto label_197f2c;
        }
    }
    ctx->pc = 0x197EC0u;
    // 0x197ec0: 0xc0664b8  jal         func_1992E0
    ctx->pc = 0x197EC0u;
    SET_GPR_U32(ctx, 31, 0x197EC8u);
    ctx->pc = 0x197EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EC0u;
            // 0x197ec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992E0u;
    if (runtime->hasFunction(0x1992E0u)) {
        auto targetFn = runtime->lookupFunction(0x1992E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EC8u; }
        if (ctx->pc != 0x197EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveElem__13CGameDataUsedFv_0x1992e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EC8u; }
        if (ctx->pc != 0x197EC8u) { return; }
    }
    ctx->pc = 0x197EC8u;
label_197ec8:
    // 0x197ec8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x197EC8u;
    {
        const bool branch_taken_0x197ec8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ec8) {
            ctx->pc = 0x197EE8u;
            goto label_197ee8;
        }
    }
    ctx->pc = 0x197ED0u;
    // 0x197ed0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x197ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x197ed4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x197ed8: 0x24636270  addiu       $v1, $v1, 0x6270
    ctx->pc = 0x197ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
    // 0x197edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197ee0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197ee4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x197ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_197ee8:
    // 0x197ee8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x197EE8u;
    {
        const bool branch_taken_0x197ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ee8) {
            ctx->pc = 0x197F08u;
            goto label_197f08;
        }
    }
    ctx->pc = 0x197EF0u;
    // 0x197ef0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x197ef4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x197ef8: 0x24636274  addiu       $v1, $v1, 0x6274
    ctx->pc = 0x197ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25204));
    // 0x197efc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197f00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197f04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x197f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_197f08:
    // 0x197f08: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x197F08u;
    {
        const bool branch_taken_0x197f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f08) {
            ctx->pc = 0x197F2Cu;
            goto label_197f2c;
        }
    }
    ctx->pc = 0x197F10u;
    // 0x197f10: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x197f14: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x197f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x197f18: 0x84630026  lh          $v1, 0x26($v1)
    ctx->pc = 0x197f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x197f1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x197f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x197f20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197F20u;
    {
        const bool branch_taken_0x197f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F20u;
            // 0x197f24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f20) {
            ctx->pc = 0x197F30u;
            goto label_197f30;
        }
    }
    ctx->pc = 0x197F28u;
label_197f28:
    // 0x197f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197f2c:
    // 0x197f2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x197f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_197f30:
    // 0x197f30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197f44: 0x3e00008  jr          $ra
    ctx->pc = 0x197F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F44u;
            // 0x197f48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197F4Cu;
}
