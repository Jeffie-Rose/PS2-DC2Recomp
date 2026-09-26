#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartEventSyori__Fv
// Address: 0x255460 - 0x2554b8
void StartEventSyori__Fv_0x255460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartEventSyori__Fv_0x255460");
#endif

    switch (ctx->pc) {
        case 0x255498u: goto label_255498;
        default: break;
    }

    ctx->pc = 0x255460u;

    // 0x255460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255464: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25546c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255470: 0x8c25e4b8  lw          $a1, -0x1B48($at)
    ctx->pc = 0x255470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960312)));
    // 0x255474: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x255474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255478: 0x10b0000b  beq         $a1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x255478u;
    {
        const bool branch_taken_0x255478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x25547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255478u;
            // 0x25547c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255478) {
            ctx->pc = 0x2554A8u;
            goto label_2554a8;
        }
    }
    ctx->pc = 0x255480u;
    // 0x255480: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x255480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255484: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255484u;
    {
        const bool branch_taken_0x255484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x255484) {
            ctx->pc = 0x2554A4u;
            goto label_2554a4;
        }
    }
    ctx->pc = 0x25548Cu;
    // 0x25548c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25548cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255490: 0xc0b1f3c  jal         func_2C7CF0
    ctx->pc = 0x255490u;
    SET_GPR_U32(ctx, 31, 0x255498u);
    ctx->pc = 0x255494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255490u;
            // 0x255494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255498u; }
        if (ctx->pc != 0x255498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255498u; }
        if (ctx->pc != 0x255498u) { return; }
    }
    ctx->pc = 0x255498u;
label_255498:
    // 0x255498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x255498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25549c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25549cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2554a0: 0xac22e4b8  sw          $v0, -0x1B48($at)
    ctx->pc = 0x2554a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
label_2554a4:
    // 0x2554a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2554a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2554a8:
    // 0x2554a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2554a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2554ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2554acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2554b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2554B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2554B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2554B0u;
            // 0x2554b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2554B8u;
}
