#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeLoopPlayStop__11CLoopSeMngrFUiiiffi
// Address: 0x18c6c0 - 0x18c790
void SeLoopPlayStop__11CLoopSeMngrFUiiiffi_0x18c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeLoopPlayStop__11CLoopSeMngrFUiiiffi_0x18c6c0");
#endif

    switch (ctx->pc) {
        case 0x18c714u: goto label_18c714;
        case 0x18c72cu: goto label_18c72c;
        default: break;
    }

    ctx->pc = 0x18c6c0u;

    // 0x18c6c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18c6c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18c6c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18c6cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18c6d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18c6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18c6d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18c6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c6e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18c6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c6e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c6e8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x18c6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c6ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c6f0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18c6f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18c6f4: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C6F4u;
    {
        const bool branch_taken_0x18c6f4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x18C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6F4u;
            // 0x18c6f8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6f4) {
            ctx->pc = 0x18C704u;
            goto label_18c704;
        }
    }
    ctx->pc = 0x18C6FCu;
    // 0x18c6fc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C6FCu;
    {
        const bool branch_taken_0x18c6fc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x18C700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6FCu;
            // 0x18c700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6fc) {
            ctx->pc = 0x18C70Cu;
            goto label_18c70c;
        }
    }
    ctx->pc = 0x18C704u;
label_18c704:
    // 0x18c704: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18C704u;
    {
        const bool branch_taken_0x18c704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C704u;
            // 0x18c708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c704) {
            ctx->pc = 0x18C76Cu;
            goto label_18c76c;
        }
    }
    ctx->pc = 0x18C70Cu;
label_18c70c:
    // 0x18c70c: 0xc06327c  jal         func_18C9F0
    ctx->pc = 0x18C70Cu;
    SET_GPR_U32(ctx, 31, 0x18C714u);
    ctx->pc = 0x18C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C70Cu;
            // 0x18c710: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C9F0u;
    if (runtime->hasFunction(0x18C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C714u; }
        if (ctx->pc != 0x18C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndCreateID__FUii_0x18c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C714u; }
        if (ctx->pc != 0x18C714u) { return; }
    }
    ctx->pc = 0x18C714u;
label_18c714:
    // 0x18c714: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18c714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c71c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x18c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x18c720: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18c720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c724: 0xc06316c  jal         func_18C5B0
    ctx->pc = 0x18C724u;
    SET_GPR_U32(ctx, 31, 0x18C72Cu);
    ctx->pc = 0x18C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C724u;
            // 0x18c728: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C5B0u;
    if (runtime->hasFunction(0x18C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x18C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C72Cu; }
        if (ctx->pc != 0x18C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoopSe__11CLoopSeMngrFPiUii_0x18c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C72Cu; }
        if (ctx->pc != 0x18C72Cu) { return; }
    }
    ctx->pc = 0x18C72Cu;
label_18c72c:
    // 0x18c72c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C72Cu;
    {
        const bool branch_taken_0x18c72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c72c) {
            ctx->pc = 0x18C73Cu;
            goto label_18c73c;
        }
    }
    ctx->pc = 0x18C734u;
    // 0x18c734: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18C734u;
    {
        const bool branch_taken_0x18c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C734u;
            // 0x18c738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c734) {
            ctx->pc = 0x18C76Cu;
            goto label_18c76c;
        }
    }
    ctx->pc = 0x18C73Cu;
label_18c73c:
    // 0x18c73c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x18c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x18c740: 0xa4510004  sh          $s1, 0x4($v0)
    ctx->pc = 0x18c740u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x18c744: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x18c744u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18c748: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x18c748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x18c74c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x18c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x18c750: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C750u;
    {
        const bool branch_taken_0x18c750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C750u;
            // 0x18c754: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c750) {
            ctx->pc = 0x18C760u;
            goto label_18c760;
        }
    }
    ctx->pc = 0x18C758u;
    // 0x18c758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C758u;
    {
        const bool branch_taken_0x18c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C758u;
            // 0x18c75c: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c758) {
            ctx->pc = 0x18C764u;
            goto label_18c764;
        }
    }
    ctx->pc = 0x18C760u;
label_18c760:
    // 0x18c760: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x18c760u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
label_18c764:
    // 0x18c764: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x18c764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x18c768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c76c:
    // 0x18c76c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18c76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c770: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c774: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18c774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c778: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c77c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18c77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18c780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c788: 0x3e00008  jr          $ra
    ctx->pc = 0x18C788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C788u;
            // 0x18c78c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C790u;
}
