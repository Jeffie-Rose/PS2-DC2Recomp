#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sprintf_r
// Address: 0x128868 - 0x1288d0
void _sprintf_r_0x128868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sprintf_r_0x128868");
#endif

    switch (ctx->pc) {
        case 0x1288bcu: goto label_1288bc;
        default: break;
    }

    ctx->pc = 0x128868u;

    // 0x128868: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x128868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x12886c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x12886cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128870: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x128870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x128874: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x128874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x128878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x128878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12887c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12887cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128880: 0x24030208  addiu       $v1, $zero, 0x208
    ctx->pc = 0x128880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x128884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x128884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x128888: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x128888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x12888c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128890: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x128890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x128894: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x128894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x128898: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x128898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x12889c: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x12889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x1288a0: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x1288a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x1288a4: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x1288a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1288a8: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1288a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x1288ac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1288acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1288b0: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1288b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x1288b4: 0xc04aaa4  jal         func_12AA90
    ctx->pc = 0x1288B4u;
    SET_GPR_U32(ctx, 31, 0x1288BCu);
    ctx->pc = 0x1288B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1288B4u;
            // 0x1288b8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AA90u;
    if (runtime->hasFunction(0x12AA90u)) {
        auto targetFn = runtime->lookupFunction(0x12AA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288BCu; }
        if (ctx->pc != 0x1288BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vfprintf_0x12aa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288BCu; }
        if (ctx->pc != 0x1288BCu) { return; }
    }
    ctx->pc = 0x1288BCu;
label_1288bc:
    // 0x1288bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1288bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1288c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1288c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1288c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1288c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1288C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1288CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288C8u;
            // 0x1288cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1288D0u;
}
