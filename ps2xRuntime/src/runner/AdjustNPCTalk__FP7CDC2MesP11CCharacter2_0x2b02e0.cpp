#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AdjustNPCTalk__FP7CDC2MesP11CCharacter2
// Address: 0x2b02e0 - 0x2b034c
void AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0");
#endif

    switch (ctx->pc) {
        case 0x2b0324u: goto label_2b0324;
        case 0x2b033cu: goto label_2b033c;
        default: break;
    }

    ctx->pc = 0x2b02e0u;

    // 0x2b02e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b02e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b02e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b02ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b02ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02f0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B02F0u;
    {
        const bool branch_taken_0x2b02f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b02f0) {
            ctx->pc = 0x2B033Cu;
            goto label_2b033c;
        }
    }
    ctx->pc = 0x2B02F8u;
    // 0x2b02f8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B02F8u;
    {
        const bool branch_taken_0x2b02f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B02FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02F8u;
            // 0x2b02fc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02f8) {
            ctx->pc = 0x2B030Cu;
            goto label_2b030c;
        }
    }
    ctx->pc = 0x2B0300u;
    // 0x2b0300: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B0300u;
    {
        const bool branch_taken_0x2b0300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0300u;
            // 0x2b0304: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0300) {
            ctx->pc = 0x2B0340u;
            goto label_2b0340;
        }
    }
    ctx->pc = 0x2B0308u;
    // 0x2b0308: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b0308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b030c:
    // 0x2b030c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0314: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x2b0314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x2b0318: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2b0318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x2b031c: 0xc05480c  jal         func_152030
    ctx->pc = 0x2B031Cu;
    SET_GPR_U32(ctx, 31, 0x2B0324u);
    ctx->pc = 0x2B0320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B031Cu;
            // 0x2b0320: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152030u;
    if (runtime->hasFunction(0x152030u)) {
        auto targetFn = runtime->lookupFunction(0x152030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0324u; }
        if (ctx->pc != 0x2B0324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPosFromChar__FP11CCharacter2Pi_0x152030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0324u; }
        if (ctx->pc != 0x2B0324u) { return; }
    }
    ctx->pc = 0x2B0324u;
label_2b0324:
    // 0x2b0324: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x2b0324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x2b0328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b032c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2b032cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0330: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2b0330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2b0334: 0xc054a10  jal         func_152840
    ctx->pc = 0x2B0334u;
    SET_GPR_U32(ctx, 31, 0x2B033Cu);
    ctx->pc = 0x2B0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0334u;
            // 0x2b0338: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152840u;
    if (runtime->hasFunction(0x152840u)) {
        auto targetFn = runtime->lookupFunction(0x152840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B033Cu; }
        if (ctx->pc != 0x2B033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSet__6ClsMesFPi_0x152840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B033Cu; }
        if (ctx->pc != 0x2B033Cu) { return; }
    }
    ctx->pc = 0x2B033Cu;
label_2b033c:
    // 0x2b033c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b033cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0340:
    // 0x2b0340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0344: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0344u;
            // 0x2b0348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B034Cu;
}
