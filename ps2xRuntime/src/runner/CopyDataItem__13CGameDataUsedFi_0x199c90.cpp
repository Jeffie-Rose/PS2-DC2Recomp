#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataItem__13CGameDataUsedFi
// Address: 0x199c90 - 0x199d40
void CopyDataItem__13CGameDataUsedFi_0x199c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataItem__13CGameDataUsedFi_0x199c90");
#endif

    switch (ctx->pc) {
        case 0x199cb4u: goto label_199cb4;
        case 0x199cc8u: goto label_199cc8;
        case 0x199ce4u: goto label_199ce4;
        case 0x199d14u: goto label_199d14;
        default: break;
    }

    ctx->pc = 0x199c90u;

    // 0x199c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199ca0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199cac: 0xc065708  jal         func_195C20
    ctx->pc = 0x199CACu;
    SET_GPR_U32(ctx, 31, 0x199CB4u);
    ctx->pc = 0x199CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CACu;
            // 0x199cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CB4u; }
        if (ctx->pc != 0x199CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CB4u; }
        if (ctx->pc != 0x199CB4u) { return; }
    }
    ctx->pc = 0x199CB4u;
label_199cb4:
    // 0x199cb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199CB4u;
    {
        const bool branch_taken_0x199cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CB4u;
            // 0x199cb8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cb4) {
            ctx->pc = 0x199CD0u;
            goto label_199cd0;
        }
    }
    ctx->pc = 0x199CBCu;
    // 0x199cbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cc0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x199CC0u;
    SET_GPR_U32(ctx, 31, 0x199CC8u);
    ctx->pc = 0x199CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CC0u;
            // 0x199cc4: 0x24845990  addiu       $a0, $a0, 0x5990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CC8u; }
        if (ctx->pc != 0x199CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CC8u; }
        if (ctx->pc != 0x199CC8u) { return; }
    }
    ctx->pc = 0x199CC8u;
label_199cc8:
    // 0x199cc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x199CC8u;
    {
        const bool branch_taken_0x199cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CC8u;
            // 0x199ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cc8) {
            ctx->pc = 0x199D28u;
            goto label_199d28;
        }
    }
    ctx->pc = 0x199CD0u;
label_199cd0:
    // 0x199cd0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x199cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x199cd4: 0x1471000b  bne         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x199CD4u;
    {
        const bool branch_taken_0x199cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x199CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CD4u;
            // 0x199cd8: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cd4) {
            ctx->pc = 0x199D04u;
            goto label_199d04;
        }
    }
    ctx->pc = 0x199CDCu;
    // 0x199cdc: 0xc065c9c  jal         func_197270
    ctx->pc = 0x199CDCu;
    SET_GPR_U32(ctx, 31, 0x199CE4u);
    ctx->pc = 0x199CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CDCu;
            // 0x199ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CE4u; }
        if (ctx->pc != 0x199CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CE4u; }
        if (ctx->pc != 0x199CE4u) { return; }
    }
    ctx->pc = 0x199CE4u;
label_199ce4:
    // 0x199ce4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199CE4u;
    {
        const bool branch_taken_0x199ce4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CE4u;
            // 0x199ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ce4) {
            ctx->pc = 0x199CFCu;
            goto label_199cfc;
        }
    }
    ctx->pc = 0x199CECu;
    // 0x199cec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x199cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199cf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199cf4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x199cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199cfc:
    // 0x199cfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x199CFCu;
    {
        const bool branch_taken_0x199cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CFCu;
            // 0x199d00: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cfc) {
            ctx->pc = 0x199D2Cu;
            goto label_199d2c;
        }
    }
    ctx->pc = 0x199D04u;
label_199d04:
    // 0x199d04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x199d04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199d08: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x199d08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x199d0c: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x199D0Cu;
    SET_GPR_U32(ctx, 31, 0x199D14u);
    ctx->pc = 0x199D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D0Cu;
            // 0x199d10: 0x82440004  lb          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D14u; }
        if (ctx->pc != 0x199D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D14u; }
        if (ctx->pc != 0x199D14u) { return; }
    }
    ctx->pc = 0x199D14u;
label_199d14:
    // 0x199d14: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x199d14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199d18: 0xa6510002  sh          $s1, 0x2($s2)
    ctx->pc = 0x199d18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x199d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199d20: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x199d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199d24: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x199d24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_199d28:
    // 0x199d28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199d2c:
    // 0x199d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199d38: 0x3e00008  jr          $ra
    ctx->pc = 0x199D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D38u;
            // 0x199d3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199D40u;
}
