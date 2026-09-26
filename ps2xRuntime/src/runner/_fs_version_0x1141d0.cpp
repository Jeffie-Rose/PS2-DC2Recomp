#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _fs_version
// Address: 0x1141d0 - 0x11425c
void _fs_version_0x1141d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fs_version_0x1141d0");
#endif

    switch (ctx->pc) {
        case 0x11420cu: goto label_11420c;
        case 0x114224u: goto label_114224;
        case 0x114238u: goto label_114238;
        default: break;
    }

    ctx->pc = 0x1141d0u;

    // 0x1141d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1141d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1141d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1141d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1141dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1141dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1141e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1141e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1141e4: 0x245306cc  addiu       $s3, $v0, 0x6CC
    ctx->pc = 0x1141e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1740));
    // 0x1141e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1141e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1141ec: 0x2471c8a8  addiu       $s1, $v1, -0x3758
    ctx->pc = 0x1141ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953128));
    // 0x1141f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1141f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1141f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1141f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1141f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1141fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1141fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114200: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x114200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114204: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x114204u;
    SET_GPR_U32(ctx, 31, 0x11420Cu);
    ctx->pc = 0x114208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114204u;
            // 0x114208: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11420Cu; }
        if (ctx->pc != 0x11420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11420Cu; }
        if (ctx->pc != 0x11420Cu) { return; }
    }
    ctx->pc = 0x11420Cu;
label_11420c:
    // 0x11420c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11420Cu;
    {
        const bool branch_taken_0x11420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11420Cu;
            // 0x114210: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11420c) {
            ctx->pc = 0x11423Cu;
            goto label_11423c;
        }
    }
    ctx->pc = 0x114214u;
    // 0x114214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114218: 0x8e050f30  lw          $a1, 0xF30($s0)
    ctx->pc = 0x114218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3888)));
    // 0x11421c: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x11421Cu;
    SET_GPR_U32(ctx, 31, 0x114224u);
    ctx->pc = 0x114220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11421Cu;
            // 0x114220: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114224u; }
        if (ctx->pc != 0x114224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114224u; }
        if (ctx->pc != 0x114224u) { return; }
    }
    ctx->pc = 0x114224u;
label_114224:
    // 0x114224: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114224u;
    {
        const bool branch_taken_0x114224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114224u;
            // 0x114228: 0x8e050f30  lw          $a1, 0xF30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114224) {
            ctx->pc = 0x11423Cu;
            goto label_11423c;
        }
    }
    ctx->pc = 0x11422Cu;
    // 0x11422c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114230: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x114230u;
    SET_GPR_U32(ctx, 31, 0x114238u);
    ctx->pc = 0x114234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114230u;
            // 0x114234: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114238u; }
        if (ctx->pc != 0x114238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114238u; }
        if (ctx->pc != 0x114238u) { return; }
    }
    ctx->pc = 0x114238u;
label_114238:
    // 0x114238: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x114238u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11423c:
    // 0x11423c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11423cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114240: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x114240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114244: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x114244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114248: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x114248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11424c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11424cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114254: 0x3e00008  jr          $ra
    ctx->pc = 0x114254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114254u;
            // 0x114258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11425Cu;
}
