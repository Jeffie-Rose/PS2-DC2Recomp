#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMenuTopic__Fv
// Address: 0x234d10 - 0x234db0
void MakeMenuTopic__Fv_0x234d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMenuTopic__Fv_0x234d10");
#endif

    switch (ctx->pc) {
        case 0x234d30u: goto label_234d30;
        case 0x234d6cu: goto label_234d6c;
        case 0x234d7cu: goto label_234d7c;
        case 0x234d88u: goto label_234d88;
        default: break;
    }

    ctx->pc = 0x234d10u;

    // 0x234d10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x234d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x234d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234d18: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x234d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x234d1c: 0xa7809560  sh          $zero, -0x6AA0($gp)
    ctx->pc = 0x234d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940000), (uint16_t)GPR_U32(ctx, 0));
    // 0x234d20: 0xaf808328  sw          $zero, -0x7CD8($gp)
    ctx->pc = 0x234d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935336), GPR_U32(ctx, 0));
    // 0x234d24: 0xa7809524  sh          $zero, -0x6ADC($gp)
    ctx->pc = 0x234d24u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939940), (uint16_t)GPR_U32(ctx, 0));
    // 0x234d28: 0xc08d2f4  jal         func_234BD0
    ctx->pc = 0x234D28u;
    SET_GPR_U32(ctx, 31, 0x234D30u);
    ctx->pc = 0x234D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234D28u;
            // 0x234d2c: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234BD0u;
    if (runtime->hasFunction(0x234BD0u)) {
        auto targetFn = runtime->lookupFunction(0x234BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D30u; }
        if (ctx->pc != 0x234D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventDay__FPi_0x234bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D30u; }
        if (ctx->pc != 0x234D30u) { return; }
    }
    ctx->pc = 0x234D30u;
label_234d30:
    // 0x234d30: 0x8f878ad0  lw          $a3, -0x7530($gp)
    ctx->pc = 0x234d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x234d34: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x234d38: 0xa7829560  sh          $v0, -0x6AA0($gp)
    ctx->pc = 0x234d38u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940000), (uint16_t)GPR_U32(ctx, 2));
    // 0x234d3c: 0x24630b10  addiu       $v1, $v1, 0xB10
    ctx->pc = 0x234d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x234d40: 0x87829560  lh          $v0, -0x6AA0($gp)
    ctx->pc = 0x234d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940000)));
    // 0x234d44: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x234d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x234d48: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x234d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x234d4c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x234d50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x234d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x234d54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234d58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x234d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234d5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234d60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x234d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234d64: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x234D64u;
    SET_GPR_U32(ctx, 31, 0x234D6Cu);
    ctx->pc = 0x234D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234D64u;
            // 0x234d68: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D6Cu; }
        if (ctx->pc != 0x234D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D6Cu; }
        if (ctx->pc != 0x234D6Cu) { return; }
    }
    ctx->pc = 0x234D6Cu;
label_234d6c:
    // 0x234d6c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x234d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x234d70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x234d74: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x234D74u;
    SET_GPR_U32(ctx, 31, 0x234D7Cu);
    ctx->pc = 0x234D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234D74u;
            // 0x234d78: 0x2484d730  addiu       $a0, $a0, -0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D7Cu; }
        if (ctx->pc != 0x234D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D7Cu; }
        if (ctx->pc != 0x234D7Cu) { return; }
    }
    ctx->pc = 0x234D7Cu;
label_234d7c:
    // 0x234d7c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x234d80: 0xc04a422  jal         func_129088
    ctx->pc = 0x234D80u;
    SET_GPR_U32(ctx, 31, 0x234D88u);
    ctx->pc = 0x234D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234D80u;
            // 0x234d84: 0x2484d730  addiu       $a0, $a0, -0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D88u; }
        if (ctx->pc != 0x234D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234D88u; }
        if (ctx->pc != 0x234D88u) { return; }
    }
    ctx->pc = 0x234D88u;
label_234d88:
    // 0x234d88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234d8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x234d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234d90: 0x8c24d7d4  lw          $a0, -0x282C($at)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957012)));
    // 0x234d94: 0xaf839568  sw          $v1, -0x6A98($gp)
    ctx->pc = 0x234d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940008), GPR_U32(ctx, 3));
    // 0x234d98: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x234d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x234d9c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x234d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x234da0: 0xa7839564  sh          $v1, -0x6A9C($gp)
    ctx->pc = 0x234da0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940004), (uint16_t)GPR_U32(ctx, 3));
    // 0x234da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234da8: 0x3e00008  jr          $ra
    ctx->pc = 0x234DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234DA8u;
            // 0x234dac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234DB0u;
}
