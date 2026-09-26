#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseEnd__Fv
// Address: 0x309d10 - 0x309dd4
void PauseEnd__Fv_0x309d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseEnd__Fv_0x309d10");
#endif

    switch (ctx->pc) {
        case 0x309d54u: goto label_309d54;
        case 0x309d6cu: goto label_309d6c;
        case 0x309d78u: goto label_309d78;
        case 0x309d80u: goto label_309d80;
        case 0x309d88u: goto label_309d88;
        case 0x309db0u: goto label_309db0;
        case 0x309db8u: goto label_309db8;
        case 0x309dc8u: goto label_309dc8;
        default: break;
    }

    ctx->pc = 0x309d10u;

    // 0x309d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x309d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309d18: 0x8f83a1a8  lw          $v1, -0x5E58($gp)
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943144)));
    // 0x309d1c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x309D1Cu;
    {
        const bool branch_taken_0x309d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309d1c) {
            ctx->pc = 0x309DC8u;
            goto label_309dc8;
        }
    }
    ctx->pc = 0x309D24u;
    // 0x309d24: 0x8f83a1c0  lw          $v1, -0x5E40($gp)
    ctx->pc = 0x309d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943168)));
    // 0x309d28: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309D28u;
    {
        const bool branch_taken_0x309d28 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x309d28) {
            ctx->pc = 0x309D38u;
            goto label_309d38;
        }
    }
    ctx->pc = 0x309D30u;
    // 0x309d30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x309D30u;
    {
        const bool branch_taken_0x309d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309D30u;
            // 0x309d34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d30) {
            ctx->pc = 0x309DCCu;
            goto label_309dcc;
        }
    }
    ctx->pc = 0x309D38u;
label_309d38:
    // 0x309d38: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309d40: 0x8c23dcc0  lw          $v1, -0x2340($at)
    ctx->pc = 0x309d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958272)));
    // 0x309d44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309D44u;
    {
        const bool branch_taken_0x309d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x309D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309D44u;
            // 0x309d48: 0xaf80a1a8  sw          $zero, -0x5E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d44) {
            ctx->pc = 0x309D54u;
            goto label_309d54;
        }
    }
    ctx->pc = 0x309D4Cu;
    // 0x309d4c: 0xc0a9890  jal         func_2A6240
    ctx->pc = 0x309D4Cu;
    SET_GPR_U32(ctx, 31, 0x309D54u);
    ctx->pc = 0x309D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309D4Cu;
            // 0x309d50: 0x8f84a1bc  lw          $a0, -0x5E44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6240u;
    if (runtime->hasFunction(0x2A6240u)) {
        auto targetFn = runtime->lookupFunction(0x2A6240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D54u; }
        if (ctx->pc != 0x309D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RePlayBGM__6CSceneFv_0x2a6240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D54u; }
        if (ctx->pc != 0x309D54u) { return; }
    }
    ctx->pc = 0x309D54u;
label_309d54:
    // 0x309d54: 0x8f82a1cc  lw          $v0, -0x5E34($gp)
    ctx->pc = 0x309d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x309d58: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x309d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x309d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309D5Cu;
    {
        const bool branch_taken_0x309d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309D5Cu;
            // 0x309d60: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d5c) {
            ctx->pc = 0x309D70u;
            goto label_309d70;
        }
    }
    ctx->pc = 0x309D64u;
    // 0x309d64: 0xc064158  jal         func_190560
    ctx->pc = 0x309D64u;
    SET_GPR_U32(ctx, 31, 0x309D6Cu);
    ctx->pc = 0x190560u;
    if (runtime->hasFunction(0x190560u)) {
        auto targetFn = runtime->lookupFunction(0x190560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D6Cu; }
        if (ctx->pc != 0x309D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamRePlay__Fv_0x190560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D6Cu; }
        if (ctx->pc != 0x309D6Cu) { return; }
    }
    ctx->pc = 0x309D6Cu;
label_309d6c:
    // 0x309d6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x309d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_309d70:
    // 0x309d70: 0xc063918  jal         func_18E460
    ctx->pc = 0x309D70u;
    SET_GPR_U32(ctx, 31, 0x309D78u);
    ctx->pc = 0x18E460u;
    if (runtime->hasFunction(0x18E460u)) {
        auto targetFn = runtime->lookupFunction(0x18E460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D78u; }
        if (ctx->pc != 0x309D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndPortSqReplay__Fi_0x18e460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D78u; }
        if (ctx->pc != 0x309D78u) { return; }
    }
    ctx->pc = 0x309D78u;
label_309d78:
    // 0x309d78: 0xc063918  jal         func_18E460
    ctx->pc = 0x309D78u;
    SET_GPR_U32(ctx, 31, 0x309D80u);
    ctx->pc = 0x309D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309D78u;
            // 0x309d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E460u;
    if (runtime->hasFunction(0x18E460u)) {
        auto targetFn = runtime->lookupFunction(0x18E460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D80u; }
        if (ctx->pc != 0x309D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndPortSqReplay__Fi_0x18e460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D80u; }
        if (ctx->pc != 0x309D80u) { return; }
    }
    ctx->pc = 0x309D80u;
label_309d80:
    // 0x309d80: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x309D80u;
    SET_GPR_U32(ctx, 31, 0x309D88u);
    ctx->pc = 0x309D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309D80u;
            // 0x309d84: 0x8f84a1c8  lw          $a0, -0x5E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D88u; }
        if (ctx->pc != 0x309D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309D88u; }
        if (ctx->pc != 0x309D88u) { return; }
    }
    ctx->pc = 0x309D88u;
label_309d88:
    // 0x309d88: 0xc78ca1c4  lwc1        $f12, -0x5E3C($gp)
    ctx->pc = 0x309d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309d8c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x309d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309d90: 0x0  nop
    ctx->pc = 0x309d90u;
    // NOP
    // 0x309d94: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x309d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309d98: 0x0  nop
    ctx->pc = 0x309d98u;
    // NOP
    // 0x309d9c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x309D9Cu;
    {
        const bool branch_taken_0x309d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309d9c) {
            ctx->pc = 0x309DB0u;
            goto label_309db0;
        }
    }
    ctx->pc = 0x309DA4u;
    // 0x309da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309da8: 0xc0634ac  jal         func_18D2B0
    ctx->pc = 0x309DA8u;
    SET_GPR_U32(ctx, 31, 0x309DB0u);
    ctx->pc = 0x309DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309DA8u;
            // 0x309dac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D2B0u;
    if (runtime->hasFunction(0x18D2B0u)) {
        auto targetFn = runtime->lookupFunction(0x18D2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DB0u; }
        if (ctx->pc != 0x309DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndMasterVolFadeInOut__Fiiff_0x18d2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DB0u; }
        if (ctx->pc != 0x309DB0u) { return; }
    }
    ctx->pc = 0x309DB0u;
label_309db0:
    // 0x309db0: 0xc064218  jal         func_190860
    ctx->pc = 0x309DB0u;
    SET_GPR_U32(ctx, 31, 0x309DB8u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DB8u; }
        if (ctx->pc != 0x309DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DB8u; }
        if (ctx->pc != 0x309DB8u) { return; }
    }
    ctx->pc = 0x309DB8u;
label_309db8:
    // 0x309db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dbc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x309dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x309dc0: 0xc063818  jal         func_18E060
    ctx->pc = 0x309DC0u;
    SET_GPR_U32(ctx, 31, 0x309DC8u);
    ctx->pc = 0x309DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309DC0u;
            // 0x309dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DC8u; }
        if (ctx->pc != 0x309DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309DC8u; }
        if (ctx->pc != 0x309DC8u) { return; }
    }
    ctx->pc = 0x309DC8u;
label_309dc8:
    // 0x309dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_309dcc:
    // 0x309dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x309DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309DCCu;
            // 0x309dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309DD4u;
}
