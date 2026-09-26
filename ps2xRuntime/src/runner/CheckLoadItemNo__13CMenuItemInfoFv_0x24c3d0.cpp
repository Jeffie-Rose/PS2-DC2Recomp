#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadItemNo__13CMenuItemInfoFv
// Address: 0x24c3d0 - 0x24c44c
void CheckLoadItemNo__13CMenuItemInfoFv_0x24c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadItemNo__13CMenuItemInfoFv_0x24c3d0");
#endif

    switch (ctx->pc) {
        case 0x24c3ecu: goto label_24c3ec;
        case 0x24c404u: goto label_24c404;
        case 0x24c440u: goto label_24c440;
        default: break;
    }

    ctx->pc = 0x24c3d0u;

    // 0x24c3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c3d8: 0x84850110  lh          $a1, 0x110($a0)
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24c3dc: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C3DCu;
    {
        const bool branch_taken_0x24c3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3DCu;
            // 0x24c3e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3dc) {
            ctx->pc = 0x24C3F4u;
            goto label_24c3f4;
        }
    }
    ctx->pc = 0x24C3E4u;
    // 0x24c3e4: 0xc0abf6c  jal         func_2AFDB0
    ctx->pc = 0x24C3E4u;
    SET_GPR_U32(ctx, 31, 0x24C3ECu);
    ctx->pc = 0x24C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3E4u;
            // 0x24c3e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C3ECu; }
        if (ctx->pc != 0x24C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C3ECu; }
        if (ctx->pc != 0x24C3ECu) { return; }
    }
    ctx->pc = 0x24C3ECu;
label_24c3ec:
    // 0x24c3ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24C3ECu;
    {
        const bool branch_taken_0x24c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3ECu;
            // 0x24c3f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3ec) {
            ctx->pc = 0x24C444u;
            goto label_24c444;
        }
    }
    ctx->pc = 0x24C3F4u;
label_24c3f4:
    // 0x24c3f4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C3F4u;
    {
        const bool branch_taken_0x24c3f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c3f4) {
            ctx->pc = 0x24C40Cu;
            goto label_24c40c;
        }
    }
    ctx->pc = 0x24C3FCu;
    // 0x24c3fc: 0xc0abf6c  jal         func_2AFDB0
    ctx->pc = 0x24C3FCu;
    SET_GPR_U32(ctx, 31, 0x24C404u);
    ctx->pc = 0x24C400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3FCu;
            // 0x24c400: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C404u; }
        if (ctx->pc != 0x24C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C404u; }
        if (ctx->pc != 0x24C404u) { return; }
    }
    ctx->pc = 0x24C404u;
label_24c404:
    // 0x24c404: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24C404u;
    {
        const bool branch_taken_0x24c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c404) {
            ctx->pc = 0x24C440u;
            goto label_24c440;
        }
    }
    ctx->pc = 0x24C40Cu;
label_24c40c:
    // 0x24c40c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c410: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24C410u;
    {
        const bool branch_taken_0x24c410 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c410) {
            ctx->pc = 0x24C440u;
            goto label_24c440;
        }
    }
    ctx->pc = 0x24C418u;
    // 0x24c418: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c41c: 0xa4820118  sh          $v0, 0x118($a0)
    ctx->pc = 0x24c41cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x24c420: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x24c420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
    // 0x24c424: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C424u;
    {
        const bool branch_taken_0x24c424 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24c424) {
            ctx->pc = 0x24C434u;
            goto label_24c434;
        }
    }
    ctx->pc = 0x24C42Cu;
    // 0x24c42c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C42Cu;
    {
        const bool branch_taken_0x24c42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C42Cu;
            // 0x24c430: 0xa3809b75  sb          $zero, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c42c) {
            ctx->pc = 0x24C438u;
            goto label_24c438;
        }
    }
    ctx->pc = 0x24C434u;
label_24c434:
    // 0x24c434: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x24c434u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_24c438:
    // 0x24c438: 0xc0abf6c  jal         func_2AFDB0
    ctx->pc = 0x24C438u;
    SET_GPR_U32(ctx, 31, 0x24C440u);
    ctx->pc = 0x24C43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C438u;
            // 0x24c43c: 0x84840118  lh          $a0, 0x118($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C440u; }
        if (ctx->pc != 0x24C440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C440u; }
        if (ctx->pc != 0x24C440u) { return; }
    }
    ctx->pc = 0x24C440u;
label_24c440:
    // 0x24c440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c444:
    // 0x24c444: 0x3e00008  jr          $ra
    ctx->pc = 0x24C444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C444u;
            // 0x24c448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24C44Cu;
}
