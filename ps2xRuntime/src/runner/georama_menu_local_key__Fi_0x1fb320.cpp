#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: georama_menu_local_key__Fi
// Address: 0x1fb320 - 0x1fb368
void georama_menu_local_key__Fi_0x1fb320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("georama_menu_local_key__Fi_0x1fb320");
#endif

    switch (ctx->pc) {
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb340u: goto label_1fb340;
        default: break;
    }

    ctx->pc = 0x1fb320u;

    // 0x1fb320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb324: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fb328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb32c: 0xc08edcc  jal         func_23B730
    ctx->pc = 0x1FB32Cu;
    SET_GPR_U32(ctx, 31, 0x1FB334u);
    ctx->pc = 0x1FB330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB32Cu;
            // 0x1fb330: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B730u;
    if (runtime->hasFunction(0x23B730u)) {
        auto targetFn = runtime->lookupFunction(0x23B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB334u; }
        if (ctx->pc != 0x1FB334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListSelectKeyCheck__Fii_0x23b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB334u; }
        if (ctx->pc != 0x1FB334u) { return; }
    }
    ctx->pc = 0x1FB334u;
label_1fb334:
    // 0x1fb334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fb334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb338: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1FB338u;
    SET_GPR_U32(ctx, 31, 0x1FB340u);
    ctx->pc = 0x1FB33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB338u;
            // 0x1fb33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB340u; }
        if (ctx->pc != 0x1FB340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB340u; }
        if (ctx->pc != 0x1FB340u) { return; }
    }
    ctx->pc = 0x1FB340u;
label_1fb340:
    // 0x1fb340: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1fb340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fb344: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB344u;
    {
        const bool branch_taken_0x1fb344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB344u;
            // 0x1fb348: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb344) {
            ctx->pc = 0x1FB358u;
            goto label_1fb358;
        }
    }
    ctx->pc = 0x1FB34Cu;
    // 0x1fb34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb350: 0xa3829028  sb          $v0, -0x6FD8($gp)
    ctx->pc = 0x1fb350u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938664), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb358:
    // 0x1fb358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb360: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB360u;
            // 0x1fb364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB368u;
}
