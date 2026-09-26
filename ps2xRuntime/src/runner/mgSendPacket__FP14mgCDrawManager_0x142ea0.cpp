#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSendPacket__FP14mgCDrawManager
// Address: 0x142ea0 - 0x142f08
void mgSendPacket__FP14mgCDrawManager_0x142ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSendPacket__FP14mgCDrawManager_0x142ea0");
#endif

    switch (ctx->pc) {
        case 0x142eb0u: goto label_142eb0;
        case 0x142ed8u: goto label_142ed8;
        case 0x142ee8u: goto label_142ee8;
        default: break;
    }

    ctx->pc = 0x142ea0u;

    // 0x142ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142ea8: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x142EA8u;
    SET_GPR_U32(ctx, 31, 0x142EB0u);
    ctx->pc = 0x142EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142EA8u;
            // 0x142eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142EB0u; }
        if (ctx->pc != 0x142EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142EB0u; }
        if (ctx->pc != 0x142EB0u) { return; }
    }
    ctx->pc = 0x142EB0u;
label_142eb0:
    // 0x142eb0: 0xaf828768  sw          $v0, -0x7898($gp)
    ctx->pc = 0x142eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 2));
    // 0x142eb4: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x142eb4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x142eb8: 0x8f868768  lw          $a2, -0x7898($gp)
    ctx->pc = 0x142eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
    // 0x142ebc: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x142ec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ec4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x142ec4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142ec8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x142ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x142ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142ed0: 0xc0440d8  jal         func_110360
    ctx->pc = 0x142ED0u;
    SET_GPR_U32(ctx, 31, 0x142ED8u);
    ctx->pc = 0x142ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142ED0u;
            // 0x142ed4: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142ED8u; }
        if (ctx->pc != 0x142ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142ED8u; }
        if (ctx->pc != 0x142ED8u) { return; }
    }
    ctx->pc = 0x142ED8u;
label_142ed8:
    // 0x142ed8: 0x8f828774  lw          $v0, -0x788C($gp)
    ctx->pc = 0x142ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142edc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x142edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142ee0: 0xc041184  jal         func_104610
    ctx->pc = 0x142EE0u;
    SET_GPR_U32(ctx, 31, 0x142EE8u);
    ctx->pc = 0x142EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142EE0u;
            // 0x142ee4: 0x8f848768  lw          $a0, -0x7898($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142EE8u; }
        if (ctx->pc != 0x142EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142EE8u; }
        if (ctx->pc != 0x142EE8u) { return; }
    }
    ctx->pc = 0x142EE8u;
label_142ee8:
    // 0x142ee8: 0x8f83881c  lw          $v1, -0x77E4($gp)
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x142eec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142ef0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x142ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x142ef4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x142ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x142ef8: 0xaf83881c  sw          $v1, -0x77E4($gp)
    ctx->pc = 0x142ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 3));
    // 0x142efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142f00: 0x3e00008  jr          $ra
    ctx->pc = 0x142F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F00u;
            // 0x142f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142F08u;
}
