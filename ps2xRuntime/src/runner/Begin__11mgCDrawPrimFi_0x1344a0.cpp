#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Begin__11mgCDrawPrimFi
// Address: 0x1344a0 - 0x13452c
void Begin__11mgCDrawPrimFi_0x1344a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Begin__11mgCDrawPrimFi_0x1344a0");
#endif

    switch (ctx->pc) {
        case 0x134514u: goto label_134514;
        case 0x13451cu: goto label_13451c;
        default: break;
    }

    ctx->pc = 0x1344a0u;

    // 0x1344a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1344a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1344a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1344a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1344a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1344a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1344ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1344acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1344b0: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x1344b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x1344b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1344b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1344b8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1344B8u;
    {
        const bool branch_taken_0x1344b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1344B8u;
            // 0x1344bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344b8) {
            ctx->pc = 0x13451Cu;
            goto label_13451c;
        }
    }
    ctx->pc = 0x1344C0u;
    // 0x1344c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1344c4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1344C4u;
    {
        const bool branch_taken_0x1344c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344c4) {
            ctx->pc = 0x13451Cu;
            goto label_13451c;
        }
    }
    ctx->pc = 0x1344CCu;
    // 0x1344cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1344ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1344d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1344D0u;
    {
        const bool branch_taken_0x1344d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1344d0) {
            ctx->pc = 0x1344E0u;
            goto label_1344e0;
        }
    }
    ctx->pc = 0x1344D8u;
    // 0x1344d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1344D8u;
    {
        const bool branch_taken_0x1344d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1344D8u;
            // 0x1344dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344d8) {
            ctx->pc = 0x134520u;
            goto label_134520;
        }
    }
    ctx->pc = 0x1344E0u;
label_1344e0:
    // 0x1344e0: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1344e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1344e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1344E4u;
    {
        const bool branch_taken_0x1344e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344e4) {
            ctx->pc = 0x13451Cu;
            goto label_13451c;
        }
    }
    ctx->pc = 0x1344ECu;
    // 0x1344ec: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1344ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1344f0: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1344f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1344f4: 0x92060050  lbu         $a2, 0x50($s0)
    ctx->pc = 0x1344f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1344f8: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x1344f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1344fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1344fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134500: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x134500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x134504: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x134504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x134508: 0xa2030050  sb          $v1, 0x50($s0)
    ctx->pc = 0x134508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x13450c: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x13450Cu;
    SET_GPR_U32(ctx, 31, 0x134514u);
    ctx->pc = 0x134510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13450Cu;
            // 0x134510: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134514u; }
        if (ctx->pc != 0x134514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134514u; }
        if (ctx->pc != 0x134514u) { return; }
    }
    ctx->pc = 0x134514u;
label_134514:
    // 0x134514: 0xc04d14c  jal         func_134530
    ctx->pc = 0x134514u;
    SET_GPR_U32(ctx, 31, 0x13451Cu);
    ctx->pc = 0x134518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134514u;
            // 0x134518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134530u;
    if (runtime->hasFunction(0x134530u)) {
        auto targetFn = runtime->lookupFunction(0x134530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13451Cu; }
        if (ctx->pc != 0x13451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginDma__11mgCDrawPrimFv_0x134530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13451Cu; }
        if (ctx->pc != 0x13451Cu) { return; }
    }
    ctx->pc = 0x13451Cu;
label_13451c:
    // 0x13451c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_134520:
    // 0x134520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134524: 0x3e00008  jr          $ra
    ctx->pc = 0x134524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134524u;
            // 0x134528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13452Cu;
}
