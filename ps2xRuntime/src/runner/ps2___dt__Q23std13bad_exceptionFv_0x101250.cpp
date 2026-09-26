#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __dt__Q23std13bad_exceptionFv
// Address: 0x101250 - 0x1012b0
void ps2___dt__Q23std13bad_exceptionFv_0x101250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dt__Q23std13bad_exceptionFv_0x101250");
#endif

    switch (ctx->pc) {
        case 0x10129cu: goto label_10129c;
        default: break;
    }

    ctx->pc = 0x101250u;

    // 0x101250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10125c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10125cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101260: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x101260u;
    {
        const bool branch_taken_0x101260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101260u;
            // 0x101264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101260) {
            ctx->pc = 0x1012A0u;
            goto label_1012a0;
        }
    }
    ctx->pc = 0x101268u;
    // 0x101268: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x101268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x10126c: 0x24424e60  addiu       $v0, $v0, 0x4E60
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20064));
    // 0x101270: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101270u;
    {
        const bool branch_taken_0x101270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101270u;
            // 0x101274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101270) {
            ctx->pc = 0x101284u;
            goto label_101284;
        }
    }
    ctx->pc = 0x101278u;
    // 0x101278: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x10127c: 0x24424e40  addiu       $v0, $v0, 0x4E40
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
    // 0x101280: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_101284:
    // 0x101284: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x101284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x101288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10128c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10128Cu;
    {
        const bool branch_taken_0x10128c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10128Cu;
            // 0x101290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10128c) {
            ctx->pc = 0x10129Cu;
            goto label_10129c;
        }
    }
    ctx->pc = 0x101294u;
    // 0x101294: 0xc040110  jal         func_100440
    ctx->pc = 0x101294u;
    SET_GPR_U32(ctx, 31, 0x10129Cu);
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10129Cu; }
        if (ctx->pc != 0x10129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dl__FPv_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10129Cu; }
        if (ctx->pc != 0x10129Cu) { return; }
    }
    ctx->pc = 0x10129Cu;
label_10129c:
    // 0x10129c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10129cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1012a0:
    // 0x1012a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1012a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1012a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1012a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1012a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1012A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1012A8u;
            // 0x1012ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1012B0u;
}
