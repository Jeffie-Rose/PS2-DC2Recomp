#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBBox__9CMapPartsFP9mgVu0FBOX
// Address: 0x1671d0 - 0x167214
void GetBBox__9CMapPartsFP9mgVu0FBOX_0x1671d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBBox__9CMapPartsFP9mgVu0FBOX_0x1671d0");
#endif

    switch (ctx->pc) {
        case 0x1671fcu: goto label_1671fc;
        default: break;
    }

    ctx->pc = 0x1671d0u;

    // 0x1671d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1671d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1671d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1671d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1671d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1671dc: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x1671dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x1671e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1671E0u;
    {
        const bool branch_taken_0x1671e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1671E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671E0u;
            // 0x1671e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671e0) {
            ctx->pc = 0x1671F0u;
            goto label_1671f0;
        }
    }
    ctx->pc = 0x1671E8u;
    // 0x1671e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1671E8u;
    {
        const bool branch_taken_0x1671e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671E8u;
            // 0x1671ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671e8) {
            ctx->pc = 0x167208u;
            goto label_167208;
        }
    }
    ctx->pc = 0x1671F0u;
label_1671f0:
    // 0x1671f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1671f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671f4: 0xc04e624  jal         func_139890
    ctx->pc = 0x1671F4u;
    SET_GPR_U32(ctx, 31, 0x1671FCu);
    ctx->pc = 0x1671F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1671F4u;
            // 0x1671f8: 0x26050240  addiu       $a1, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671FCu; }
        if (ctx->pc != 0x1671FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671FCu; }
        if (ctx->pc != 0x1671FCu) { return; }
    }
    ctx->pc = 0x1671FCu;
label_1671fc:
    // 0x1671fc: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x167200: 0x0  nop
    ctx->pc = 0x167200u;
    // NOP
    // 0x167204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167208:
    // 0x167208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16720c: 0x3e00008  jr          $ra
    ctx->pc = 0x16720Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16720Cu;
            // 0x167210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167214u;
}
