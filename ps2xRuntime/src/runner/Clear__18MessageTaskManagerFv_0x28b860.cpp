#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__18MessageTaskManagerFv
// Address: 0x28b860 - 0x28b8f8
void Clear__18MessageTaskManagerFv_0x28b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__18MessageTaskManagerFv_0x28b860");
#endif

    switch (ctx->pc) {
        case 0x28b89cu: goto label_28b89c;
        case 0x28b8c4u: goto label_28b8c4;
        default: break;
    }

    ctx->pc = 0x28b860u;

    // 0x28b860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28b868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b870: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x28b870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b874: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28B874u;
    {
        const bool branch_taken_0x28b874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B874u;
            // 0x28b878: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b874) {
            ctx->pc = 0x28B8E4u;
            goto label_28b8e4;
        }
    }
    ctx->pc = 0x28B87Cu;
    // 0x28b87c: 0x8e230368  lw          $v1, 0x368($s1)
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x28b880: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28B880u;
    {
        const bool branch_taken_0x28b880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b880) {
            ctx->pc = 0x28B8E4u;
            goto label_28b8e4;
        }
    }
    ctx->pc = 0x28B888u;
    // 0x28b888: 0x84630086  lh          $v1, 0x86($v1)
    ctx->pc = 0x28b888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x28b88c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28B88Cu;
    {
        const bool branch_taken_0x28b88c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x28B890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B88Cu;
            // 0x28b890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b88c) {
            ctx->pc = 0x28B8C4u;
            goto label_28b8c4;
        }
    }
    ctx->pc = 0x28B894u;
    // 0x28b894: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x28B894u;
    SET_GPR_U32(ctx, 31, 0x28B89Cu);
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B89Cu; }
        if (ctx->pc != 0x28B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B89Cu; }
        if (ctx->pc != 0x28B89Cu) { return; }
    }
    ctx->pc = 0x28B89Cu;
label_28b89c:
    // 0x28b89c: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x28b89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x28b8a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b8a4: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x28b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x28b8a8: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x28b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x28b8ac: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x28b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x28b8b0: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x28b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x28b8b4: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x28b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x28b8b8: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x28b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x28b8bc: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x28B8BCu;
    SET_GPR_U32(ctx, 31, 0x28B8C4u);
    ctx->pc = 0x28B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8BCu;
            // 0x28b8c0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8C4u; }
        if (ctx->pc != 0x28B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8C4u; }
        if (ctx->pc != 0x28B8C4u) { return; }
    }
    ctx->pc = 0x28B8C4u;
label_28b8c4:
    // 0x28b8c4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b8c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b8cc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b8d0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b8d4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b8d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28b8dc: 0xae200368  sw          $zero, 0x368($s1)
    ctx->pc = 0x28b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 0));
    // 0x28b8e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_28b8e4:
    // 0x28b8e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b8e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b8ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8F0u;
            // 0x28b8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B8F8u;
}
