#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SettingAquaMes__8CAquaMesFi
// Address: 0x2111c0 - 0x21125c
void SettingAquaMes__8CAquaMesFi_0x2111c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SettingAquaMes__8CAquaMesFi_0x2111c0");
#endif

    switch (ctx->pc) {
        case 0x2111fcu: goto label_2111fc;
        case 0x211208u: goto label_211208;
        case 0x211218u: goto label_211218;
        case 0x211224u: goto label_211224;
        case 0x211234u: goto label_211234;
        case 0x211240u: goto label_211240;
        case 0x21124cu: goto label_21124c;
        default: break;
    }

    ctx->pc = 0x2111c0u;

    // 0x2111c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2111c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2111c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2111c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2111c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2111c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2111cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2111ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2111d0: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2111D0u;
    {
        const bool branch_taken_0x2111d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2111D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111D0u;
            // 0x2111d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111d0) {
            ctx->pc = 0x21122Cu;
            goto label_21122c;
        }
    }
    ctx->pc = 0x2111D8u;
    // 0x2111d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2111d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2111dc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2111DCu;
    {
        const bool branch_taken_0x2111dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2111dc) {
            ctx->pc = 0x211210u;
            goto label_211210;
        }
    }
    ctx->pc = 0x2111E4u;
    // 0x2111e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2111E4u;
    {
        const bool branch_taken_0x2111e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111E4u;
            // 0x2111e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111e4) {
            ctx->pc = 0x2111F4u;
            goto label_2111f4;
        }
    }
    ctx->pc = 0x2111ECu;
    // 0x2111ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2111ECu;
    {
        const bool branch_taken_0x2111ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111ECu;
            // 0x2111f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111ec) {
            ctx->pc = 0x211244u;
            goto label_211244;
        }
    }
    ctx->pc = 0x2111F4u;
label_2111f4:
    // 0x2111f4: 0xc084498  jal         func_211260
    ctx->pc = 0x2111F4u;
    SET_GPR_U32(ctx, 31, 0x2111FCu);
    ctx->pc = 0x211260u;
    if (runtime->hasFunction(0x211260u)) {
        auto targetFn = runtime->lookupFunction(0x211260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2111FCu; }
        if (ctx->pc != 0x2111FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTitleId__8CAquaMesFi_0x211260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2111FCu; }
        if (ctx->pc != 0x2111FCu) { return; }
    }
    ctx->pc = 0x2111FCu;
label_2111fc:
    // 0x2111fc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x211200: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x211200u;
    SET_GPR_U32(ctx, 31, 0x211208u);
    ctx->pc = 0x211204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211200u;
            // 0x211204: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211208u; }
        if (ctx->pc != 0x211208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211208u; }
        if (ctx->pc != 0x211208u) { return; }
    }
    ctx->pc = 0x211208u;
label_211208:
    // 0x211208: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x211208u;
    {
        const bool branch_taken_0x211208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211208) {
            ctx->pc = 0x211240u;
            goto label_211240;
        }
    }
    ctx->pc = 0x211210u;
label_211210:
    // 0x211210: 0xc084498  jal         func_211260
    ctx->pc = 0x211210u;
    SET_GPR_U32(ctx, 31, 0x211218u);
    ctx->pc = 0x211214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211210u;
            // 0x211214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211260u;
    if (runtime->hasFunction(0x211260u)) {
        auto targetFn = runtime->lookupFunction(0x211260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211218u; }
        if (ctx->pc != 0x211218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTitleId__8CAquaMesFi_0x211260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211218u; }
        if (ctx->pc != 0x211218u) { return; }
    }
    ctx->pc = 0x211218u;
label_211218:
    // 0x211218: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x211218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21121c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x21121Cu;
    SET_GPR_U32(ctx, 31, 0x211224u);
    ctx->pc = 0x211220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21121Cu;
            // 0x211220: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211224u; }
        if (ctx->pc != 0x211224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211224u; }
        if (ctx->pc != 0x211224u) { return; }
    }
    ctx->pc = 0x211224u;
label_211224:
    // 0x211224: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211224u;
    {
        const bool branch_taken_0x211224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211224) {
            ctx->pc = 0x211240u;
            goto label_211240;
        }
    }
    ctx->pc = 0x21122Cu;
label_21122c:
    // 0x21122c: 0xc084498  jal         func_211260
    ctx->pc = 0x21122Cu;
    SET_GPR_U32(ctx, 31, 0x211234u);
    ctx->pc = 0x211230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21122Cu;
            // 0x211230: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211260u;
    if (runtime->hasFunction(0x211260u)) {
        auto targetFn = runtime->lookupFunction(0x211260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211234u; }
        if (ctx->pc != 0x211234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTitleId__8CAquaMesFi_0x211260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211234u; }
        if (ctx->pc != 0x211234u) { return; }
    }
    ctx->pc = 0x211234u;
label_211234:
    // 0x211234: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x211234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x211238: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x211238u;
    SET_GPR_U32(ctx, 31, 0x211240u);
    ctx->pc = 0x21123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211238u;
            // 0x21123c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211240u; }
        if (ctx->pc != 0x211240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211240u; }
        if (ctx->pc != 0x211240u) { return; }
    }
    ctx->pc = 0x211240u;
label_211240:
    // 0x211240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211244:
    // 0x211244: 0xc084588  jal         func_211620
    ctx->pc = 0x211244u;
    SET_GPR_U32(ctx, 31, 0x21124Cu);
    ctx->pc = 0x211248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211244u;
            // 0x211248: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211620u;
    if (runtime->hasFunction(0x211620u)) {
        auto targetFn = runtime->lookupFunction(0x211620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21124Cu; }
        if (ctx->pc != 0x21124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCtrlHelpId__8CAquaMesFi_0x211620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21124Cu; }
        if (ctx->pc != 0x21124Cu) { return; }
    }
    ctx->pc = 0x21124Cu;
label_21124c:
    // 0x21124c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21124cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211254: 0x3e00008  jr          $ra
    ctx->pc = 0x211254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211254u;
            // 0x211258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21125Cu;
}
