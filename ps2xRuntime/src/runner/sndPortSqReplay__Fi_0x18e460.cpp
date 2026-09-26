#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndPortSqReplay__Fi
// Address: 0x18e460 - 0x18e4c0
void sndPortSqReplay__Fi_0x18e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndPortSqReplay__Fi_0x18e460");
#endif

    switch (ctx->pc) {
        case 0x18e470u: goto label_18e470;
        case 0x18e498u: goto label_18e498;
        case 0x18e4a8u: goto label_18e4a8;
        default: break;
    }

    ctx->pc = 0x18e460u;

    // 0x18e460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e468: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E468u;
    SET_GPR_U32(ctx, 31, 0x18E470u);
    ctx->pc = 0x18E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E468u;
            // 0x18e46c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E470u; }
        if (ctx->pc != 0x18E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E470u; }
        if (ctx->pc != 0x18E470u) { return; }
    }
    ctx->pc = 0x18E470u;
label_18e470:
    // 0x18e470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e474: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x18E474u;
    {
        const bool branch_taken_0x18e474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e474) {
            ctx->pc = 0x18E4B0u;
            goto label_18e4b0;
        }
    }
    ctx->pc = 0x18E47Cu;
    // 0x18e47c: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x18e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18e480: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e484: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18E484u;
    {
        const bool branch_taken_0x18e484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e484) {
            ctx->pc = 0x18E4B0u;
            goto label_18e4b0;
        }
    }
    ctx->pc = 0x18E48Cu;
    // 0x18e48c: 0x8e05020c  lw          $a1, 0x20C($s0)
    ctx->pc = 0x18e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e490: 0xc063de8  jal         func_18F7A0
    ctx->pc = 0x18E490u;
    SET_GPR_U32(ctx, 31, 0x18E498u);
    ctx->pc = 0x18E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E490u;
            // 0x18e494: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F7A0u;
    if (runtime->hasFunction(0x18F7A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E498u; }
        if (ctx->pc != 0x18E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSqRePlay__Fii_0x18f7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E498u; }
        if (ctx->pc != 0x18E498u) { return; }
    }
    ctx->pc = 0x18E498u;
label_18e498:
    // 0x18e498: 0x8e05020c  lw          $a1, 0x20C($s0)
    ctx->pc = 0x18e498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e49c: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x18e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18e4a0: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18E4A0u;
    SET_GPR_U32(ctx, 31, 0x18E4A8u);
    ctx->pc = 0x18E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4A0u;
            // 0x18e4a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (runtime->hasFunction(0x18F750u)) {
        auto targetFn = runtime->lookupFunction(0x18F750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4A8u; }
        if (ctx->pc != 0x18E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSqVol__Fiii_0x18f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4A8u; }
        if (ctx->pc != 0x18E4A8u) { return; }
    }
    ctx->pc = 0x18E4A8u;
label_18e4a8:
    // 0x18e4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e4ac: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x18e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
label_18e4b0:
    // 0x18e4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4B8u;
            // 0x18e4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E4C0u;
}
