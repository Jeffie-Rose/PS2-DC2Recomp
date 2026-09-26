#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetName__9CMapPartsFPc
// Address: 0x166360 - 0x1663b8
void SetName__9CMapPartsFPc_0x166360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetName__9CMapPartsFPc_0x166360");
#endif

    switch (ctx->pc) {
        case 0x166384u: goto label_166384;
        case 0x1663a4u: goto label_1663a4;
        default: break;
    }

    ctx->pc = 0x166360u;

    // 0x166360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16636c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166370: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x166370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166374: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x166374u;
    {
        const bool branch_taken_0x166374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166374u;
            // 0x166378: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166374) {
            ctx->pc = 0x1663A4u;
            goto label_1663a4;
        }
    }
    ctx->pc = 0x16637Cu;
    // 0x16637c: 0xc04a422  jal         func_129088
    ctx->pc = 0x16637Cu;
    SET_GPR_U32(ctx, 31, 0x166384u);
    ctx->pc = 0x166380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16637Cu;
            // 0x166380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166384u; }
        if (ctx->pc != 0x166384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166384u; }
        if (ctx->pc != 0x166384u) { return; }
    }
    ctx->pc = 0x166384u;
label_166384:
    // 0x166384: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x166384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x166388: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x166388u;
    {
        const bool branch_taken_0x166388 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166388u;
            // 0x16638c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166388) {
            ctx->pc = 0x16639Cu;
            goto label_16639c;
        }
    }
    ctx->pc = 0x166390u;
    // 0x166390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166390u;
    {
        const bool branch_taken_0x166390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166390u;
            // 0x166394: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166390) {
            ctx->pc = 0x1663A8u;
            goto label_1663a8;
        }
    }
    ctx->pc = 0x166398u;
    // 0x166398: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x166398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_16639c:
    // 0x16639c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x16639Cu;
    SET_GPR_U32(ctx, 31, 0x1663A4u);
    ctx->pc = 0x1663A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16639Cu;
            // 0x1663a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663A4u; }
        if (ctx->pc != 0x1663A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663A4u; }
        if (ctx->pc != 0x1663A4u) { return; }
    }
    ctx->pc = 0x1663A4u;
label_1663a4:
    // 0x1663a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1663a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1663a8:
    // 0x1663a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1663a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1663ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1663acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1663b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1663B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663B0u;
            // 0x1663b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1663B8u;
}
