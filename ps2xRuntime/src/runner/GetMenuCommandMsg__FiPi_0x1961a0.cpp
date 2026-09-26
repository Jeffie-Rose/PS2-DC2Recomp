#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuCommandMsg__FiPi
// Address: 0x1961a0 - 0x19651c
void GetMenuCommandMsg__FiPi_0x1961a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuCommandMsg__FiPi_0x1961a0");
#endif

    switch (ctx->pc) {
        case 0x1961c4u: goto label_1961c4;
        case 0x1961f4u: goto label_1961f4;
        case 0x196218u: goto label_196218;
        case 0x19622cu: goto label_19622c;
        case 0x196240u: goto label_196240;
        case 0x196254u: goto label_196254;
        case 0x196268u: goto label_196268;
        case 0x19627cu: goto label_19627c;
        case 0x196290u: goto label_196290;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962ecu: goto label_1962ec;
        case 0x196310u: goto label_196310;
        case 0x19632cu: goto label_19632c;
        case 0x196348u: goto label_196348;
        case 0x196364u: goto label_196364;
        case 0x196380u: goto label_196380;
        case 0x19639cu: goto label_19639c;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963e8u: goto label_1963e8;
        case 0x196404u: goto label_196404;
        case 0x196420u: goto label_196420;
        case 0x19643cu: goto label_19643c;
        case 0x196458u: goto label_196458;
        case 0x196474u: goto label_196474;
        case 0x196484u: goto label_196484;
        case 0x196498u: goto label_196498;
        case 0x1964acu: goto label_1964ac;
        case 0x1964c0u: goto label_1964c0;
        case 0x1964d4u: goto label_1964d4;
        case 0x1964e8u: goto label_1964e8;
        case 0x1964fcu: goto label_1964fc;
        default: break;
    }

    ctx->pc = 0x1961a0u;

    // 0x1961a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1961a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1961a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1961a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1961a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1961a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1961ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1961acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1961b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1961b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1961b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1961b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1961b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961bc: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x1961BCu;
    SET_GPR_U32(ctx, 31, 0x1961C4u);
    ctx->pc = 0x1961C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961BCu;
            // 0x1961c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961C4u; }
        if (ctx->pc != 0x1961C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961C4u; }
        if (ctx->pc != 0x1961C4u) { return; }
    }
    ctx->pc = 0x1961C4u;
label_1961c4:
    // 0x1961c4: 0x2c410024  sltiu       $at, $v0, 0x24
    ctx->pc = 0x1961c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1961c8: 0x102000cd  beqz        $at, . + 4 + (0xCD << 2)
    ctx->pc = 0x1961C8u;
    {
        const bool branch_taken_0x1961c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1961CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1961C8u;
            // 0x1961cc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961c8) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1961D0u;
    // 0x1961d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1961d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1961d4: 0x246354d0  addiu       $v1, $v1, 0x54D0
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21712));
    // 0x1961d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1961dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1961e0: 0x400008  jr          $v0
    ctx->pc = 0x1961E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1961E8u: goto label_1961e8;
            case 0x196220u: goto label_196220;
            case 0x196234u: goto label_196234;
            case 0x196248u: goto label_196248;
            case 0x19625Cu: goto label_19625c;
            case 0x196270u: goto label_196270;
            case 0x196284u: goto label_196284;
            case 0x196298u: goto label_196298;
            case 0x1962ACu: goto label_1962ac;
            case 0x1962C0u: goto label_1962c0;
            case 0x1962D4u: goto label_1962d4;
            case 0x19648Cu: goto label_19648c;
            case 0x1964A0u: goto label_1964a0;
            case 0x1964B4u: goto label_1964b4;
            case 0x1964C8u: goto label_1964c8;
            case 0x1964DCu: goto label_1964dc;
            case 0x1964F0u: goto label_1964f0;
            case 0x196500u: goto label_196500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1961E8u;
label_1961e8:
    // 0x1961e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1961e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961ec: 0xc06584c  jal         func_196130
    ctx->pc = 0x1961ECu;
    SET_GPR_U32(ctx, 31, 0x1961F4u);
    ctx->pc = 0x1961F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961ECu;
            // 0x1961f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961F4u; }
        if (ctx->pc != 0x1961F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961F4u; }
        if (ctx->pc != 0x1961F4u) { return; }
    }
    ctx->pc = 0x1961F4u;
label_1961f4:
    // 0x1961f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1961f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961f8: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x1961fc: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1961FCu;
    {
        const bool branch_taken_0x1961fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x196200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1961FCu;
            // 0x196200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961fc) {
            ctx->pc = 0x196210u;
            goto label_196210;
        }
    }
    ctx->pc = 0x196204u;
    // 0x196204: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x196204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x196208: 0x164200be  bne         $s2, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x196208u;
    {
        const bool branch_taken_0x196208 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196208u;
            // 0x19620c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196208) {
            ctx->pc = 0x196504u;
            goto label_196504;
        }
    }
    ctx->pc = 0x196210u;
label_196210:
    // 0x196210: 0xc06584c  jal         func_196130
    ctx->pc = 0x196210u;
    SET_GPR_U32(ctx, 31, 0x196218u);
    ctx->pc = 0x196214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196210u;
            // 0x196214: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196218u; }
        if (ctx->pc != 0x196218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196218u; }
        if (ctx->pc != 0x196218u) { return; }
    }
    ctx->pc = 0x196218u;
label_196218:
    // 0x196218: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x196218u;
    {
        const bool branch_taken_0x196218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196218u;
            // 0x19621c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196218) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196220u;
label_196220:
    // 0x196220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196224: 0xc06584c  jal         func_196130
    ctx->pc = 0x196224u;
    SET_GPR_U32(ctx, 31, 0x19622Cu);
    ctx->pc = 0x196228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196224u;
            // 0x196228: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19622Cu; }
        if (ctx->pc != 0x19622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19622Cu; }
        if (ctx->pc != 0x19622Cu) { return; }
    }
    ctx->pc = 0x19622Cu;
label_19622c:
    // 0x19622c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x19622Cu;
    {
        const bool branch_taken_0x19622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19622Cu;
            // 0x196230: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19622c) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196234u;
label_196234:
    // 0x196234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196238: 0xc06584c  jal         func_196130
    ctx->pc = 0x196238u;
    SET_GPR_U32(ctx, 31, 0x196240u);
    ctx->pc = 0x19623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196238u;
            // 0x19623c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196240u; }
        if (ctx->pc != 0x196240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196240u; }
        if (ctx->pc != 0x196240u) { return; }
    }
    ctx->pc = 0x196240u;
label_196240:
    // 0x196240: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x196240u;
    {
        const bool branch_taken_0x196240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196240u;
            // 0x196244: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196240) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196248u;
label_196248:
    // 0x196248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19624c: 0xc06584c  jal         func_196130
    ctx->pc = 0x19624Cu;
    SET_GPR_U32(ctx, 31, 0x196254u);
    ctx->pc = 0x196250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19624Cu;
            // 0x196250: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196254u; }
        if (ctx->pc != 0x196254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196254u; }
        if (ctx->pc != 0x196254u) { return; }
    }
    ctx->pc = 0x196254u;
label_196254:
    // 0x196254: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x196254u;
    {
        const bool branch_taken_0x196254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196254u;
            // 0x196258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196254) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x19625Cu;
label_19625c:
    // 0x19625c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19625cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196260: 0xc06584c  jal         func_196130
    ctx->pc = 0x196260u;
    SET_GPR_U32(ctx, 31, 0x196268u);
    ctx->pc = 0x196264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196260u;
            // 0x196264: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196268u; }
        if (ctx->pc != 0x196268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196268u; }
        if (ctx->pc != 0x196268u) { return; }
    }
    ctx->pc = 0x196268u;
label_196268:
    // 0x196268: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x196268u;
    {
        const bool branch_taken_0x196268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19626Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196268u;
            // 0x19626c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196268) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196270u;
label_196270:
    // 0x196270: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196274: 0xc06584c  jal         func_196130
    ctx->pc = 0x196274u;
    SET_GPR_U32(ctx, 31, 0x19627Cu);
    ctx->pc = 0x196278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196274u;
            // 0x196278: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19627Cu; }
        if (ctx->pc != 0x19627Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19627Cu; }
        if (ctx->pc != 0x19627Cu) { return; }
    }
    ctx->pc = 0x19627Cu;
label_19627c:
    // 0x19627c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x19627Cu;
    {
        const bool branch_taken_0x19627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19627Cu;
            // 0x196280: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19627c) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196284u;
label_196284:
    // 0x196284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196288: 0xc06584c  jal         func_196130
    ctx->pc = 0x196288u;
    SET_GPR_U32(ctx, 31, 0x196290u);
    ctx->pc = 0x19628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196288u;
            // 0x19628c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196290u; }
        if (ctx->pc != 0x196290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196290u; }
        if (ctx->pc != 0x196290u) { return; }
    }
    ctx->pc = 0x196290u;
label_196290:
    // 0x196290: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x196290u;
    {
        const bool branch_taken_0x196290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196290u;
            // 0x196294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196290) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196298u;
label_196298:
    // 0x196298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19629c: 0xc06584c  jal         func_196130
    ctx->pc = 0x19629Cu;
    SET_GPR_U32(ctx, 31, 0x1962A4u);
    ctx->pc = 0x1962A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19629Cu;
            // 0x1962a0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962A4u; }
        if (ctx->pc != 0x1962A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962A4u; }
        if (ctx->pc != 0x1962A4u) { return; }
    }
    ctx->pc = 0x1962A4u;
label_1962a4:
    // 0x1962a4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1962A4u;
    {
        const bool branch_taken_0x1962a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962A4u;
            // 0x1962a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962a4) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1962ACu;
label_1962ac:
    // 0x1962ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1962acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962b0: 0xc06584c  jal         func_196130
    ctx->pc = 0x1962B0u;
    SET_GPR_U32(ctx, 31, 0x1962B8u);
    ctx->pc = 0x1962B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1962B0u;
            // 0x1962b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962B8u; }
        if (ctx->pc != 0x1962B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962B8u; }
        if (ctx->pc != 0x1962B8u) { return; }
    }
    ctx->pc = 0x1962B8u;
label_1962b8:
    // 0x1962b8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1962B8u;
    {
        const bool branch_taken_0x1962b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962B8u;
            // 0x1962bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962b8) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1962C0u;
label_1962c0:
    // 0x1962c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1962c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962c4: 0xc06584c  jal         func_196130
    ctx->pc = 0x1962C4u;
    SET_GPR_U32(ctx, 31, 0x1962CCu);
    ctx->pc = 0x1962C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1962C4u;
            // 0x1962c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962CCu; }
        if (ctx->pc != 0x1962CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962CCu; }
        if (ctx->pc != 0x1962CCu) { return; }
    }
    ctx->pc = 0x1962CCu;
label_1962cc:
    // 0x1962cc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1962CCu;
    {
        const bool branch_taken_0x1962cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962CCu;
            // 0x1962d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962cc) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1962D4u;
label_1962d4:
    // 0x1962d4: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x1962d8: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1962D8u;
    {
        const bool branch_taken_0x1962d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1962DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962D8u;
            // 0x1962dc: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962d8) {
            ctx->pc = 0x1962F4u;
            goto label_1962f4;
        }
    }
    ctx->pc = 0x1962E0u;
    // 0x1962e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1962e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962e4: 0xc06584c  jal         func_196130
    ctx->pc = 0x1962E4u;
    SET_GPR_U32(ctx, 31, 0x1962ECu);
    ctx->pc = 0x1962E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1962E4u;
            // 0x1962e8: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962ECu; }
        if (ctx->pc != 0x1962ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962ECu; }
        if (ctx->pc != 0x1962ECu) { return; }
    }
    ctx->pc = 0x1962ECu;
label_1962ec:
    // 0x1962ec: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1962ECu;
    {
        const bool branch_taken_0x1962ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962ECu;
            // 0x1962f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962ec) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1962F4u;
label_1962f4:
    // 0x1962f4: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1962F4u;
    {
        const bool branch_taken_0x1962f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1962F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962F4u;
            // 0x1962f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962f4) {
            ctx->pc = 0x196308u;
            goto label_196308;
        }
    }
    ctx->pc = 0x1962FCu;
    // 0x1962fc: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x196300: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196300u;
    {
        const bool branch_taken_0x196300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196300u;
            // 0x196304: 0x2402017d  addiu       $v0, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196300) {
            ctx->pc = 0x196318u;
            goto label_196318;
        }
    }
    ctx->pc = 0x196308u;
label_196308:
    // 0x196308: 0xc06584c  jal         func_196130
    ctx->pc = 0x196308u;
    SET_GPR_U32(ctx, 31, 0x196310u);
    ctx->pc = 0x19630Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196308u;
            // 0x19630c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196310u; }
        if (ctx->pc != 0x196310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196310u; }
        if (ctx->pc != 0x196310u) { return; }
    }
    ctx->pc = 0x196310u;
label_196310:
    // 0x196310: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x196310u;
    {
        const bool branch_taken_0x196310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196310u;
            // 0x196314: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196310) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196318u;
label_196318:
    // 0x196318: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196318u;
    {
        const bool branch_taken_0x196318 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196318u;
            // 0x19631c: 0x24020128  addiu       $v0, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196318) {
            ctx->pc = 0x196334u;
            goto label_196334;
        }
    }
    ctx->pc = 0x196320u;
    // 0x196320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196324: 0xc06584c  jal         func_196130
    ctx->pc = 0x196324u;
    SET_GPR_U32(ctx, 31, 0x19632Cu);
    ctx->pc = 0x196328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196324u;
            // 0x196328: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19632Cu; }
        if (ctx->pc != 0x19632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19632Cu; }
        if (ctx->pc != 0x19632Cu) { return; }
    }
    ctx->pc = 0x19632Cu;
label_19632c:
    // 0x19632c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x19632Cu;
    {
        const bool branch_taken_0x19632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19632Cu;
            // 0x196330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19632c) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196334u;
label_196334:
    // 0x196334: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196334u;
    {
        const bool branch_taken_0x196334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196334u;
            // 0x196338: 0x24020184  addiu       $v0, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196334) {
            ctx->pc = 0x196350u;
            goto label_196350;
        }
    }
    ctx->pc = 0x19633Cu;
    // 0x19633c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196340: 0xc06584c  jal         func_196130
    ctx->pc = 0x196340u;
    SET_GPR_U32(ctx, 31, 0x196348u);
    ctx->pc = 0x196344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196340u;
            // 0x196344: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196348u; }
        if (ctx->pc != 0x196348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196348u; }
        if (ctx->pc != 0x196348u) { return; }
    }
    ctx->pc = 0x196348u;
label_196348:
    // 0x196348: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x196348u;
    {
        const bool branch_taken_0x196348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196348u;
            // 0x19634c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196348) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196350u;
label_196350:
    // 0x196350: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196350u;
    {
        const bool branch_taken_0x196350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196350u;
            // 0x196354: 0x24020185  addiu       $v0, $zero, 0x185 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196350) {
            ctx->pc = 0x19636Cu;
            goto label_19636c;
        }
    }
    ctx->pc = 0x196358u;
    // 0x196358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19635c: 0xc06584c  jal         func_196130
    ctx->pc = 0x19635Cu;
    SET_GPR_U32(ctx, 31, 0x196364u);
    ctx->pc = 0x196360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19635Cu;
            // 0x196360: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196364u; }
        if (ctx->pc != 0x196364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196364u; }
        if (ctx->pc != 0x196364u) { return; }
    }
    ctx->pc = 0x196364u;
label_196364:
    // 0x196364: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x196364u;
    {
        const bool branch_taken_0x196364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196364u;
            // 0x196368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196364) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x19636Cu;
label_19636c:
    // 0x19636c: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19636Cu;
    {
        const bool branch_taken_0x19636c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19636Cu;
            // 0x196370: 0x24020182  addiu       $v0, $zero, 0x182 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19636c) {
            ctx->pc = 0x196388u;
            goto label_196388;
        }
    }
    ctx->pc = 0x196374u;
    // 0x196374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196378: 0xc06584c  jal         func_196130
    ctx->pc = 0x196378u;
    SET_GPR_U32(ctx, 31, 0x196380u);
    ctx->pc = 0x19637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196378u;
            // 0x19637c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196380u; }
        if (ctx->pc != 0x196380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196380u; }
        if (ctx->pc != 0x196380u) { return; }
    }
    ctx->pc = 0x196380u;
label_196380:
    // 0x196380: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x196380u;
    {
        const bool branch_taken_0x196380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196380u;
            // 0x196384: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196380) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196388u;
label_196388:
    // 0x196388: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196388u;
    {
        const bool branch_taken_0x196388 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196388u;
            // 0x19638c: 0x2402011f  addiu       $v0, $zero, 0x11F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196388) {
            ctx->pc = 0x1963A4u;
            goto label_1963a4;
        }
    }
    ctx->pc = 0x196390u;
    // 0x196390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196394: 0xc06584c  jal         func_196130
    ctx->pc = 0x196394u;
    SET_GPR_U32(ctx, 31, 0x19639Cu);
    ctx->pc = 0x196398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196394u;
            // 0x196398: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19639Cu; }
        if (ctx->pc != 0x19639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19639Cu; }
        if (ctx->pc != 0x19639Cu) { return; }
    }
    ctx->pc = 0x19639Cu;
label_19639c:
    // 0x19639c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x19639Cu;
    {
        const bool branch_taken_0x19639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19639Cu;
            // 0x1963a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19639c) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1963A4u;
label_1963a4:
    // 0x1963a4: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1963A4u;
    {
        const bool branch_taken_0x1963a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963A4u;
            // 0x1963a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963a4) {
            ctx->pc = 0x1963C4u;
            goto label_1963c4;
        }
    }
    ctx->pc = 0x1963ACu;
    // 0x1963ac: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x1963b0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1963B0u;
    {
        const bool branch_taken_0x1963b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963B0u;
            // 0x1963b4: 0x24020111  addiu       $v0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963b0) {
            ctx->pc = 0x1963C0u;
            goto label_1963c0;
        }
    }
    ctx->pc = 0x1963B8u;
    // 0x1963b8: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1963B8u;
    {
        const bool branch_taken_0x1963b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1963BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963B8u;
            // 0x1963bc: 0x24020163  addiu       $v0, $zero, 0x163 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963b8) {
            ctx->pc = 0x1963D4u;
            goto label_1963d4;
        }
    }
    ctx->pc = 0x1963C0u;
label_1963c0:
    // 0x1963c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1963c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1963c4:
    // 0x1963c4: 0xc06584c  jal         func_196130
    ctx->pc = 0x1963C4u;
    SET_GPR_U32(ctx, 31, 0x1963CCu);
    ctx->pc = 0x1963C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963C4u;
            // 0x1963c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963CCu; }
        if (ctx->pc != 0x1963CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963CCu; }
        if (ctx->pc != 0x1963CCu) { return; }
    }
    ctx->pc = 0x1963CCu;
label_1963cc:
    // 0x1963cc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1963CCu;
    {
        const bool branch_taken_0x1963cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963CCu;
            // 0x1963d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963cc) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1963D4u;
label_1963d4:
    // 0x1963d4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1963D4u;
    {
        const bool branch_taken_0x1963d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1963D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963D4u;
            // 0x1963d8: 0x240201a7  addiu       $v0, $zero, 0x1A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963d4) {
            ctx->pc = 0x1963F0u;
            goto label_1963f0;
        }
    }
    ctx->pc = 0x1963DCu;
    // 0x1963dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1963dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963e0: 0xc06584c  jal         func_196130
    ctx->pc = 0x1963E0u;
    SET_GPR_U32(ctx, 31, 0x1963E8u);
    ctx->pc = 0x1963E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963E0u;
            // 0x1963e4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963E8u; }
        if (ctx->pc != 0x1963E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963E8u; }
        if (ctx->pc != 0x1963E8u) { return; }
    }
    ctx->pc = 0x1963E8u;
label_1963e8:
    // 0x1963e8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1963E8u;
    {
        const bool branch_taken_0x1963e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963E8u;
            // 0x1963ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963e8) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1963F0u;
label_1963f0:
    // 0x1963f0: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1963F0u;
    {
        const bool branch_taken_0x1963f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1963F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963F0u;
            // 0x1963f4: 0x24020125  addiu       $v0, $zero, 0x125 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963f0) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963F8u;
    // 0x1963f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1963f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963fc: 0xc06584c  jal         func_196130
    ctx->pc = 0x1963FCu;
    SET_GPR_U32(ctx, 31, 0x196404u);
    ctx->pc = 0x196400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963FCu;
            // 0x196400: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196404u; }
        if (ctx->pc != 0x196404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196404u; }
        if (ctx->pc != 0x196404u) { return; }
    }
    ctx->pc = 0x196404u;
label_196404:
    // 0x196404: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x196404u;
    {
        const bool branch_taken_0x196404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196404u;
            // 0x196408: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196404) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x19640Cu;
label_19640c:
    // 0x19640c: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19640Cu;
    {
        const bool branch_taken_0x19640c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19640Cu;
            // 0x196410: 0x240200ae  addiu       $v0, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19640c) {
            ctx->pc = 0x196428u;
            goto label_196428;
        }
    }
    ctx->pc = 0x196414u;
    // 0x196414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196418: 0xc06584c  jal         func_196130
    ctx->pc = 0x196418u;
    SET_GPR_U32(ctx, 31, 0x196420u);
    ctx->pc = 0x19641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196418u;
            // 0x19641c: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196420u; }
        if (ctx->pc != 0x196420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196420u; }
        if (ctx->pc != 0x196420u) { return; }
    }
    ctx->pc = 0x196420u;
label_196420:
    // 0x196420: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x196420u;
    {
        const bool branch_taken_0x196420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196420u;
            // 0x196424: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196420) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196428u;
label_196428:
    // 0x196428: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196428u;
    {
        const bool branch_taken_0x196428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196428u;
            // 0x19642c: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196428) {
            ctx->pc = 0x196444u;
            goto label_196444;
        }
    }
    ctx->pc = 0x196430u;
    // 0x196430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196434: 0xc06584c  jal         func_196130
    ctx->pc = 0x196434u;
    SET_GPR_U32(ctx, 31, 0x19643Cu);
    ctx->pc = 0x196438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196434u;
            // 0x196438: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19643Cu; }
        if (ctx->pc != 0x19643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19643Cu; }
        if (ctx->pc != 0x19643Cu) { return; }
    }
    ctx->pc = 0x19643Cu;
label_19643c:
    // 0x19643c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19643Cu;
    {
        const bool branch_taken_0x19643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19643Cu;
            // 0x196440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19643c) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196444u;
label_196444:
    // 0x196444: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196444u;
    {
        const bool branch_taken_0x196444 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196444u;
            // 0x196448: 0x24020127  addiu       $v0, $zero, 0x127 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196444) {
            ctx->pc = 0x196460u;
            goto label_196460;
        }
    }
    ctx->pc = 0x19644Cu;
    // 0x19644c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196450: 0xc06584c  jal         func_196130
    ctx->pc = 0x196450u;
    SET_GPR_U32(ctx, 31, 0x196458u);
    ctx->pc = 0x196454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196450u;
            // 0x196454: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196458u; }
        if (ctx->pc != 0x196458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196458u; }
        if (ctx->pc != 0x196458u) { return; }
    }
    ctx->pc = 0x196458u;
label_196458:
    // 0x196458: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x196458u;
    {
        const bool branch_taken_0x196458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196458u;
            // 0x19645c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196458) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x196460u;
label_196460:
    // 0x196460: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196460u;
    {
        const bool branch_taken_0x196460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x196464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196460u;
            // 0x196464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196460) {
            ctx->pc = 0x19647Cu;
            goto label_19647c;
        }
    }
    ctx->pc = 0x196468u;
    // 0x196468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19646c: 0xc06584c  jal         func_196130
    ctx->pc = 0x19646Cu;
    SET_GPR_U32(ctx, 31, 0x196474u);
    ctx->pc = 0x196470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19646Cu;
            // 0x196470: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196474u; }
        if (ctx->pc != 0x196474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196474u; }
        if (ctx->pc != 0x196474u) { return; }
    }
    ctx->pc = 0x196474u;
label_196474:
    // 0x196474: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x196474u;
    {
        const bool branch_taken_0x196474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196474u;
            // 0x196478: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196474) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x19647Cu;
label_19647c:
    // 0x19647c: 0xc06584c  jal         func_196130
    ctx->pc = 0x19647Cu;
    SET_GPR_U32(ctx, 31, 0x196484u);
    ctx->pc = 0x196480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19647Cu;
            // 0x196480: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    }
    ctx->pc = 0x196484u;
label_196484:
    // 0x196484: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x196484u;
    {
        const bool branch_taken_0x196484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196484u;
            // 0x196488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196484) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x19648Cu;
label_19648c:
    // 0x19648c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196490: 0xc06584c  jal         func_196130
    ctx->pc = 0x196490u;
    SET_GPR_U32(ctx, 31, 0x196498u);
    ctx->pc = 0x196494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196490u;
            // 0x196494: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196498u; }
        if (ctx->pc != 0x196498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196498u; }
        if (ctx->pc != 0x196498u) { return; }
    }
    ctx->pc = 0x196498u;
label_196498:
    // 0x196498: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196498u;
    {
        const bool branch_taken_0x196498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196498u;
            // 0x19649c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196498) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964A0u;
label_1964a0:
    // 0x1964a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964a4: 0xc06584c  jal         func_196130
    ctx->pc = 0x1964A4u;
    SET_GPR_U32(ctx, 31, 0x1964ACu);
    ctx->pc = 0x1964A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964A4u;
            // 0x1964a8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964ACu; }
        if (ctx->pc != 0x1964ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964ACu; }
        if (ctx->pc != 0x1964ACu) { return; }
    }
    ctx->pc = 0x1964ACu;
label_1964ac:
    // 0x1964ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1964ACu;
    {
        const bool branch_taken_0x1964ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964ACu;
            // 0x1964b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964ac) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964B4u;
label_1964b4:
    // 0x1964b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964b8: 0xc06584c  jal         func_196130
    ctx->pc = 0x1964B8u;
    SET_GPR_U32(ctx, 31, 0x1964C0u);
    ctx->pc = 0x1964BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964B8u;
            // 0x1964bc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964C0u; }
        if (ctx->pc != 0x1964C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964C0u; }
        if (ctx->pc != 0x1964C0u) { return; }
    }
    ctx->pc = 0x1964C0u;
label_1964c0:
    // 0x1964c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1964C0u;
    {
        const bool branch_taken_0x1964c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964C0u;
            // 0x1964c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964c0) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964C8u;
label_1964c8:
    // 0x1964c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964cc: 0xc06584c  jal         func_196130
    ctx->pc = 0x1964CCu;
    SET_GPR_U32(ctx, 31, 0x1964D4u);
    ctx->pc = 0x1964D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964CCu;
            // 0x1964d0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964D4u; }
        if (ctx->pc != 0x1964D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964D4u; }
        if (ctx->pc != 0x1964D4u) { return; }
    }
    ctx->pc = 0x1964D4u;
label_1964d4:
    // 0x1964d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1964D4u;
    {
        const bool branch_taken_0x1964d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964D4u;
            // 0x1964d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964d4) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964DCu;
label_1964dc:
    // 0x1964dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964e0: 0xc06584c  jal         func_196130
    ctx->pc = 0x1964E0u;
    SET_GPR_U32(ctx, 31, 0x1964E8u);
    ctx->pc = 0x1964E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964E0u;
            // 0x1964e4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964E8u; }
        if (ctx->pc != 0x1964E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964E8u; }
        if (ctx->pc != 0x1964E8u) { return; }
    }
    ctx->pc = 0x1964E8u;
label_1964e8:
    // 0x1964e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1964E8u;
    {
        const bool branch_taken_0x1964e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964E8u;
            // 0x1964ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964e8) {
            ctx->pc = 0x196500u;
            goto label_196500;
        }
    }
    ctx->pc = 0x1964F0u;
label_1964f0:
    // 0x1964f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1964f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964f4: 0xc06584c  jal         func_196130
    ctx->pc = 0x1964F4u;
    SET_GPR_U32(ctx, 31, 0x1964FCu);
    ctx->pc = 0x1964F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964F4u;
            // 0x1964f8: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196130u;
    if (runtime->hasFunction(0x196130u)) {
        auto targetFn = runtime->lookupFunction(0x196130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964FCu; }
        if (ctx->pc != 0x1964FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCmdMsgSet__FiPi_0x196130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964FCu; }
        if (ctx->pc != 0x1964FCu) { return; }
    }
    ctx->pc = 0x1964FCu;
label_1964fc:
    // 0x1964fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1964fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196500:
    // 0x196500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196504:
    // 0x196504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x196504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19650c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19650cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196514: 0x3e00008  jr          $ra
    ctx->pc = 0x196514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196514u;
            // 0x196518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19651Cu;
}
