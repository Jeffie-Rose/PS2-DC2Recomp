#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDrawDirect__FP8mgCFrame
// Address: 0x142fd0 - 0x143034
void mgDrawDirect__FP8mgCFrame_0x142fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDrawDirect__FP8mgCFrame_0x142fd0");
#endif

    switch (ctx->pc) {
        case 0x142fd0u: goto label_142fd0;
        case 0x142fd4u: goto label_142fd4;
        case 0x142fd8u: goto label_142fd8;
        case 0x142fdcu: goto label_142fdc;
        case 0x142fe0u: goto label_142fe0;
        case 0x142fe4u: goto label_142fe4;
        case 0x142fe8u: goto label_142fe8;
        case 0x142fecu: goto label_142fec;
        case 0x142ff0u: goto label_142ff0;
        case 0x142ff4u: goto label_142ff4;
        case 0x142ff8u: goto label_142ff8;
        case 0x142ffcu: goto label_142ffc;
        case 0x143000u: goto label_143000;
        case 0x143004u: goto label_143004;
        case 0x143008u: goto label_143008;
        case 0x14300cu: goto label_14300c;
        case 0x143010u: goto label_143010;
        case 0x143014u: goto label_143014;
        case 0x143018u: goto label_143018;
        case 0x14301cu: goto label_14301c;
        case 0x143020u: goto label_143020;
        case 0x143024u: goto label_143024;
        case 0x143028u: goto label_143028;
        case 0x14302cu: goto label_14302c;
        case 0x143030u: goto label_143030;
        default: break;
    }

    ctx->pc = 0x142fd0u;

label_142fd0:
    // 0x142fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_142fd4:
    // 0x142fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_142fd8:
    // 0x142fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_142fdc:
    // 0x142fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142fe0:
    // 0x142fe0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_142fe4:
    if (ctx->pc == 0x142FE4u) {
        ctx->pc = 0x142FE4u;
            // 0x142fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x142FE8u;
        goto label_142fe8;
    }
    ctx->pc = 0x142FE0u;
    {
        const bool branch_taken_0x142fe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x142FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FE0u;
            // 0x142fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fe0) {
            ctx->pc = 0x142FF0u;
            goto label_142ff0;
        }
    }
    ctx->pc = 0x142FE8u;
label_142fe8:
    // 0x142fe8: 0x1000000f  b           . + 4 + (0xF << 2)
label_142fec:
    if (ctx->pc == 0x142FECu) {
        ctx->pc = 0x142FECu;
            // 0x142fec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x142FF0u;
        goto label_142ff0;
    }
    ctx->pc = 0x142FE8u;
    {
        const bool branch_taken_0x142fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FE8u;
            // 0x142fec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fe8) {
            ctx->pc = 0x143028u;
            goto label_143028;
        }
    }
    ctx->pc = 0x142FF0u;
label_142ff0:
    // 0x142ff0: 0xc041ace  jal         func_106B38
label_142ff4:
    if (ctx->pc == 0x142FF4u) {
        ctx->pc = 0x142FF4u;
            // 0x142ff4: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->pc = 0x142FF8u;
        goto label_142ff8;
    }
    ctx->pc = 0x142FF0u;
    SET_GPR_U32(ctx, 31, 0x142FF8u);
    ctx->pc = 0x142FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142FF0u;
            // 0x142ff4: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142FF8u; }
        if (ctx->pc != 0x142FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142FF8u; }
        if (ctx->pc != 0x142FF8u) { return; }
    }
    ctx->pc = 0x142FF8u;
label_142ff8:
    // 0x142ff8: 0x8f828774  lw          $v0, -0x788C($gp)
    ctx->pc = 0x142ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_142ffc:
    // 0x142ffc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x142ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143000:
    // 0x143000: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x143000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143004:
    // 0x143004: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x143004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_143008:
    // 0x143008: 0x320f809  jalr        $t9
label_14300c:
    if (ctx->pc == 0x14300Cu) {
        ctx->pc = 0x14300Cu;
            // 0x14300c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x143010u;
        goto label_143010;
    }
    ctx->pc = 0x143008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143010u);
        ctx->pc = 0x14300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143008u;
            // 0x14300c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x143010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x143010u; }
            if (ctx->pc != 0x143010u) { return; }
        }
        }
    }
    ctx->pc = 0x143010u;
label_143010:
    // 0x143010: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x143010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_143014:
    // 0x143014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143018:
    // 0x143018: 0xc041b7e  jal         func_106DF8
label_14301c:
    if (ctx->pc == 0x14301Cu) {
        ctx->pc = 0x14301Cu;
            // 0x14301c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x143020u;
        goto label_143020;
    }
    ctx->pc = 0x143018u;
    SET_GPR_U32(ctx, 31, 0x143020u);
    ctx->pc = 0x14301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143018u;
            // 0x14301c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143020u; }
        if (ctx->pc != 0x143020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143020u; }
        if (ctx->pc != 0x143020u) { return; }
    }
    ctx->pc = 0x143020u;
label_143020:
    // 0x143020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143024:
    // 0x143024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143028:
    // 0x143028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14302c:
    // 0x14302c: 0x3e00008  jr          $ra
label_143030:
    if (ctx->pc == 0x143030u) {
        ctx->pc = 0x143030u;
            // 0x143030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x143034u;
        goto label_fallthrough_0x14302c;
    }
    ctx->pc = 0x14302Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14302Cu;
            // 0x143030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14302c:
    ctx->pc = 0x143034u;
}
