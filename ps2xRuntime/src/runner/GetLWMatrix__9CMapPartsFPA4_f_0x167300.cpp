#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLWMatrix__9CMapPartsFPA4_f
// Address: 0x167300 - 0x167344
void GetLWMatrix__9CMapPartsFPA4_f_0x167300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLWMatrix__9CMapPartsFPA4_f_0x167300");
#endif

    switch (ctx->pc) {
        case 0x167300u: goto label_167300;
        case 0x167304u: goto label_167304;
        case 0x167308u: goto label_167308;
        case 0x16730cu: goto label_16730c;
        case 0x167310u: goto label_167310;
        case 0x167314u: goto label_167314;
        case 0x167318u: goto label_167318;
        case 0x16731cu: goto label_16731c;
        case 0x167320u: goto label_167320;
        case 0x167324u: goto label_167324;
        case 0x167328u: goto label_167328;
        case 0x16732cu: goto label_16732c;
        case 0x167330u: goto label_167330;
        case 0x167334u: goto label_167334;
        case 0x167338u: goto label_167338;
        case 0x16733cu: goto label_16733c;
        case 0x167340u: goto label_167340;
        default: break;
    }

    ctx->pc = 0x167300u;

label_167300:
    // 0x167300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_167304:
    // 0x167304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167308:
    // 0x167308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16730c:
    // 0x16730c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167310:
    // 0x167310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167314:
    // 0x167314: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x167314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_167318:
    // 0x167318: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x167318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_16731c:
    // 0x16731c: 0x320f809  jalr        $t9
label_167320:
    if (ctx->pc == 0x167320u) {
        ctx->pc = 0x167320u;
            // 0x167320: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167324u;
        goto label_167324;
    }
    ctx->pc = 0x16731Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167324u);
        ctx->pc = 0x167320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16731Cu;
            // 0x167320: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167324u; }
            if (ctx->pc != 0x167324u) { return; }
        }
        }
    }
    ctx->pc = 0x167324u;
label_167324:
    // 0x167324: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x167324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_167328:
    // 0x167328: 0xc04dc0c  jal         func_137030
label_16732c:
    if (ctx->pc == 0x16732Cu) {
        ctx->pc = 0x16732Cu;
            // 0x16732c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167330u;
        goto label_167330;
    }
    ctx->pc = 0x167328u;
    SET_GPR_U32(ctx, 31, 0x167330u);
    ctx->pc = 0x16732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167328u;
            // 0x16732c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167330u; }
        if (ctx->pc != 0x167330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167330u; }
        if (ctx->pc != 0x167330u) { return; }
    }
    ctx->pc = 0x167330u;
label_167330:
    // 0x167330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167334:
    // 0x167334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167338:
    // 0x167338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16733c:
    // 0x16733c: 0x3e00008  jr          $ra
label_167340:
    if (ctx->pc == 0x167340u) {
        ctx->pc = 0x167340u;
            // 0x167340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x167344u;
        goto label_fallthrough_0x16733c;
    }
    ctx->pc = 0x16733Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16733Cu;
            // 0x167340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16733c:
    ctx->pc = 0x167344u;
}
