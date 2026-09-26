#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __dt__Q23std9bad_allocFv
// Address: 0x100560 - 0x1005c0
void ps2___dt__Q23std9bad_allocFv_0x100560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dt__Q23std9bad_allocFv_0x100560");
#endif

    switch (ctx->pc) {
        case 0x1005acu: goto label_1005ac;
        default: break;
    }

    ctx->pc = 0x100560u;

    // 0x100560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10056c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10056cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100570: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x100570u;
    {
        const bool branch_taken_0x100570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100570u;
            // 0x100574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100570) {
            ctx->pc = 0x1005B0u;
            goto label_1005b0;
        }
    }
    ctx->pc = 0x100578u;
    // 0x100578: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x100578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x10057c: 0x24424e50  addiu       $v0, $v0, 0x4E50
    ctx->pc = 0x10057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20048));
    // 0x100580: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100580u;
    {
        const bool branch_taken_0x100580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100580u;
            // 0x100584: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100580) {
            ctx->pc = 0x100594u;
            goto label_100594;
        }
    }
    ctx->pc = 0x100588u;
    // 0x100588: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x100588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x10058c: 0x24424e40  addiu       $v0, $v0, 0x4E40
    ctx->pc = 0x10058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
    // 0x100590: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_100594:
    // 0x100594: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x100594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x100598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10059c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10059Cu;
    {
        const bool branch_taken_0x10059c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1005A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10059Cu;
            // 0x1005a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10059c) {
            ctx->pc = 0x1005ACu;
            goto label_1005ac;
        }
    }
    ctx->pc = 0x1005A4u;
    // 0x1005a4: 0xc040110  jal         func_100440
    ctx->pc = 0x1005A4u;
    SET_GPR_U32(ctx, 31, 0x1005ACu);
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005ACu; }
        if (ctx->pc != 0x1005ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dl__FPv_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005ACu; }
        if (ctx->pc != 0x1005ACu) { return; }
    }
    ctx->pc = 0x1005ACu;
label_1005ac:
    // 0x1005ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1005acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1005b0:
    // 0x1005b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1005b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1005b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1005b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1005b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1005B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005B8u;
            // 0x1005bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1005C0u;
}
