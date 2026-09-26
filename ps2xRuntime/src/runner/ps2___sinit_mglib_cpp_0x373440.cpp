#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_mglib.cpp
// Address: 0x373440 - 0x373508
void ps2___sinit_mglib_cpp_0x373440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_mglib_cpp_0x373440");
#endif

    switch (ctx->pc) {
        case 0x373454u: goto label_373454;
        case 0x37345cu: goto label_37345c;
        case 0x373480u: goto label_373480;
        case 0x37348cu: goto label_37348c;
        case 0x3734acu: goto label_3734ac;
        case 0x3734ccu: goto label_3734cc;
        case 0x3734d8u: goto label_3734d8;
        case 0x3734f8u: goto label_3734f8;
        default: break;
    }

    ctx->pc = 0x373440u;

    // 0x373440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x373444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x373448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x373448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37344c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x37344cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x373450: 0x26101de0  addiu       $s0, $s0, 0x1DE0
    ctx->pc = 0x373450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7648));
label_373454:
    // 0x373454: 0xc04e214  jal         func_138850
    ctx->pc = 0x373454u;
    SET_GPR_U32(ctx, 31, 0x37345Cu);
    ctx->pc = 0x373458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373454u;
            // 0x373458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138850u;
    if (runtime->hasFunction(0x138850u)) {
        auto targetFn = runtime->lookupFunction(0x138850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37345Cu; }
        if (ctx->pc != 0x37345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCDrawEnvFv_0x138850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37345Cu; }
        if (ctx->pc != 0x37345Cu) { return; }
    }
    ctx->pc = 0x37345Cu;
label_37345c:
    // 0x37345c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37345cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x373460: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x373460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x373464: 0x24421e60  addiu       $v0, $v0, 0x1E60
    ctx->pc = 0x373464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x373468: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37346c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37346Cu;
    {
        const bool branch_taken_0x37346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37346c) {
            ctx->pc = 0x373454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_373454;
        }
    }
    ctx->pc = 0x373474u;
    // 0x373474: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x373474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x373478: 0xc04b1f8  jal         func_12C7E0
    ctx->pc = 0x373478u;
    SET_GPR_U32(ctx, 31, 0x373480u);
    ctx->pc = 0x37347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373478u;
            // 0x37347c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C7E0u;
    if (runtime->hasFunction(0x12C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x12C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373480u; }
        if (ctx->pc != 0x373480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__17mgCTextureManagerFv_0x12c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373480u; }
        if (ctx->pc != 0x373480u) { return; }
    }
    ctx->pc = 0x373480u;
label_373480:
    // 0x373480: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x373480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x373484: 0xc04d460  jal         func_135180
    ctx->pc = 0x373484u;
    SET_GPR_U32(ctx, 31, 0x37348Cu);
    ctx->pc = 0x373488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373484u;
            // 0x373488: 0x248420e0  addiu       $a0, $a0, 0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135180u;
    if (runtime->hasFunction(0x135180u)) {
        auto targetFn = runtime->lookupFunction(0x135180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37348Cu; }
        if (ctx->pc != 0x37348Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14mgCDrawManagerFv_0x135180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37348Cu; }
        if (ctx->pc != 0x37348Cu) { return; }
    }
    ctx->pc = 0x37348Cu;
label_37348c:
    // 0x37348c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x37348cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x373490: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x373494: 0x248423d0  addiu       $a0, $a0, 0x23D0
    ctx->pc = 0x373494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9168));
    // 0x373498: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x37349c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37349cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734a0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x3734a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3734a4: 0xc040070  jal         func_1001C0
    ctx->pc = 0x3734A4u;
    SET_GPR_U32(ctx, 31, 0x3734ACu);
    ctx->pc = 0x3734A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3734A4u;
            // 0x3734a8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734ACu; }
        if (ctx->pc != 0x3734ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734ACu; }
        if (ctx->pc != 0x3734ACu) { return; }
    }
    ctx->pc = 0x3734ACu;
label_3734ac:
    // 0x3734ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3734acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x3734b0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x3734b4: 0x24842430  addiu       $a0, $a0, 0x2430
    ctx->pc = 0x3734b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9264));
    // 0x3734b8: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x3734b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x3734bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3734bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734c0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x3734c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3734c4: 0xc040070  jal         func_1001C0
    ctx->pc = 0x3734C4u;
    SET_GPR_U32(ctx, 31, 0x3734CCu);
    ctx->pc = 0x3734C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3734C4u;
            // 0x3734c8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734CCu; }
        if (ctx->pc != 0x3734CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734CCu; }
        if (ctx->pc != 0x3734CCu) { return; }
    }
    ctx->pc = 0x3734CCu;
label_3734cc:
    // 0x3734cc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3734ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x3734d0: 0xc04b120  jal         func_12C480
    ctx->pc = 0x3734D0u;
    SET_GPR_U32(ctx, 31, 0x3734D8u);
    ctx->pc = 0x3734D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3734D0u;
            // 0x3734d4: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734D8u; }
        if (ctx->pc != 0x3734D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734D8u; }
        if (ctx->pc != 0x3734D8u) { return; }
    }
    ctx->pc = 0x3734D8u;
label_3734d8:
    // 0x3734d8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3734d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x3734dc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x3734dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x3734e0: 0x24842510  addiu       $a0, $a0, 0x2510
    ctx->pc = 0x3734e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9488));
    // 0x3734e4: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x3734e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
    // 0x3734e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3734e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734ec: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x3734ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3734f0: 0xc040070  jal         func_1001C0
    ctx->pc = 0x3734F0u;
    SET_GPR_U32(ctx, 31, 0x3734F8u);
    ctx->pc = 0x3734F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3734F0u;
            // 0x3734f4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734F8u; }
        if (ctx->pc != 0x3734F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3734F8u; }
        if (ctx->pc != 0x3734F8u) { return; }
    }
    ctx->pc = 0x3734F8u;
label_3734f8:
    // 0x3734f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3734f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3734fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3734fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373500: 0x3e00008  jr          $ra
    ctx->pc = 0x373500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373500u;
            // 0x373504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373508u;
}
