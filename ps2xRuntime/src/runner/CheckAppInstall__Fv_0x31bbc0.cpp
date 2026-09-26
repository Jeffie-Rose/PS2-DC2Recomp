#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckAppInstall__Fv
// Address: 0x31bbc0 - 0x31bd50
void CheckAppInstall__Fv_0x31bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckAppInstall__Fv_0x31bbc0");
#endif

    switch (ctx->pc) {
        case 0x31bbd8u: goto label_31bbd8;
        case 0x31bbf4u: goto label_31bbf4;
        case 0x31bc04u: goto label_31bc04;
        case 0x31bc14u: goto label_31bc14;
        case 0x31bc24u: goto label_31bc24;
        case 0x31bc30u: goto label_31bc30;
        case 0x31bc4cu: goto label_31bc4c;
        case 0x31bc80u: goto label_31bc80;
        case 0x31bc9cu: goto label_31bc9c;
        case 0x31bcd0u: goto label_31bcd0;
        case 0x31bcecu: goto label_31bcec;
        case 0x31bd08u: goto label_31bd08;
        case 0x31bd28u: goto label_31bd28;
        default: break;
    }

    ctx->pc = 0x31bbc0u;

    // 0x31bbc0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x31bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x31bbc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31bbc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31bbcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31bbd0: 0xc0c6eb0  jal         func_31BAC0
    ctx->pc = 0x31BBD0u;
    SET_GPR_U32(ctx, 31, 0x31BBD8u);
    ctx->pc = 0x31BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BBD0u;
            // 0x31bbd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BAC0u;
    if (runtime->hasFunction(0x31BAC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BBD8u; }
        if (ctx->pc != 0x31BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPartition__Fv_0x31bac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BBD8u; }
        if (ctx->pc != 0x31BBD8u) { return; }
    }
    ctx->pc = 0x31BBD8u;
label_31bbd8:
    // 0x31bbd8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BBD8u;
    {
        const bool branch_taken_0x31bbd8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31BBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BBD8u;
            // 0x31bbdc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbd8) {
            ctx->pc = 0x31BBE8u;
            goto label_31bbe8;
        }
    }
    ctx->pc = 0x31BBE0u;
    // 0x31bbe0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x31BBE0u;
    {
        const bool branch_taken_0x31bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BBE0u;
            // 0x31bbe4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbe0) {
            ctx->pc = 0x31BD3Cu;
            goto label_31bd3c;
        }
    }
    ctx->pc = 0x31BBE8u;
label_31bbe8:
    // 0x31bbe8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x31bbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31bbec: 0xc0c6e0c  jal         func_31B830
    ctx->pc = 0x31BBECu;
    SET_GPR_U32(ctx, 31, 0x31BBF4u);
    ctx->pc = 0x31BBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BBECu;
            // 0x31bbf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31B830u;
    if (runtime->hasFunction(0x31B830u)) {
        auto targetFn = runtime->lookupFunction(0x31B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BBF4u; }
        if (ctx->pc != 0x31BBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPassword__FPc_0x31b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BBF4u; }
        if (ctx->pc != 0x31BBF4u) { return; }
    }
    ctx->pc = 0x31BBF4u;
label_31bbf4:
    // 0x31bbf4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bbf8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31bbfc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31BBFCu;
    SET_GPR_U32(ctx, 31, 0x31BC04u);
    ctx->pc = 0x31BC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BBFCu;
            // 0x31bc00: 0x24a52d70  addiu       $a1, $a1, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC04u; }
        if (ctx->pc != 0x31BC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC04u; }
        if (ctx->pc != 0x31BC04u) { return; }
    }
    ctx->pc = 0x31BC04u;
label_31bc04:
    // 0x31bc04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bc08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31bc0c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BC0Cu;
    SET_GPR_U32(ctx, 31, 0x31BC14u);
    ctx->pc = 0x31BC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC0Cu;
            // 0x31bc10: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC14u; }
        if (ctx->pc != 0x31BC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC14u; }
        if (ctx->pc != 0x31BC14u) { return; }
    }
    ctx->pc = 0x31BC14u;
label_31bc14:
    // 0x31bc14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bc18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31bc1c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BC1Cu;
    SET_GPR_U32(ctx, 31, 0x31BC24u);
    ctx->pc = 0x31BC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC1Cu;
            // 0x31bc20: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC24u; }
        if (ctx->pc != 0x31BC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC24u; }
        if (ctx->pc != 0x31BC24u) { return; }
    }
    ctx->pc = 0x31BC24u;
label_31bc24:
    // 0x31bc24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31bc28: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BC28u;
    SET_GPR_U32(ctx, 31, 0x31BC30u);
    ctx->pc = 0x31BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC28u;
            // 0x31bc2c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC30u; }
        if (ctx->pc != 0x31BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC30u; }
        if (ctx->pc != 0x31BC30u) { return; }
    }
    ctx->pc = 0x31BC30u;
label_31bc30:
    // 0x31bc30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bc34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31bc38: 0x24842d58  addiu       $a0, $a0, 0x2D58
    ctx->pc = 0x31bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11608));
    // 0x31bc3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31bc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bc40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31bc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc44: 0xc045964  jal         func_116590
    ctx->pc = 0x31BC44u;
    SET_GPR_U32(ctx, 31, 0x31BC4Cu);
    ctx->pc = 0x31BC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC44u;
            // 0x31bc48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116590u;
    if (runtime->hasFunction(0x116590u)) {
        auto targetFn = runtime->lookupFunction(0x116590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC4Cu; }
        if (ctx->pc != 0x31BC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMount_0x116590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC4Cu; }
        if (ctx->pc != 0x31BC4Cu) { return; }
    }
    ctx->pc = 0x31BC4Cu;
label_31bc4c:
    // 0x31bc4c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BC4Cu;
    {
        const bool branch_taken_0x31bc4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31bc4c) {
            ctx->pc = 0x31BC74u;
            goto label_31bc74;
        }
    }
    ctx->pc = 0x31BC54u;
    // 0x31bc54: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x31bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31bc58: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BC58u;
    {
        const bool branch_taken_0x31bc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31bc58) {
            ctx->pc = 0x31BC70u;
            goto label_31bc70;
        }
    }
    ctx->pc = 0x31BC60u;
    // 0x31bc60: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BC60u;
    {
        const bool branch_taken_0x31bc60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31bc60) {
            ctx->pc = 0x31BC74u;
            goto label_31bc74;
        }
    }
    ctx->pc = 0x31BC68u;
    // 0x31bc68: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x31BC68u;
    {
        const bool branch_taken_0x31bc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc68) {
            ctx->pc = 0x31BD38u;
            goto label_31bd38;
        }
    }
    ctx->pc = 0x31BC70u;
label_31bc70:
    // 0x31bc70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31bc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bc74:
    // 0x31bc74: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bc78: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x31BC78u;
    SET_GPR_U32(ctx, 31, 0x31BC80u);
    ctx->pc = 0x31BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC78u;
            // 0x31bc7c: 0x24842d50  addiu       $a0, $a0, 0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (runtime->hasFunction(0x1163D8u)) {
        auto targetFn = runtime->lookupFunction(0x1163D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC80u; }
        if (ctx->pc != 0x31BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceChdir_0x1163d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC80u; }
        if (ctx->pc != 0x31BC80u) { return; }
    }
    ctx->pc = 0x31BC80u;
label_31bc80:
    // 0x31bc80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc84: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31BC84u;
    {
        const bool branch_taken_0x31bc84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x31BC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC84u;
            // 0x31bc88: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc84) {
            ctx->pc = 0x31BCF8u;
            goto label_31bcf8;
        }
    }
    ctx->pc = 0x31BC8Cu;
    // 0x31bc8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bc90: 0x24842e10  addiu       $a0, $a0, 0x2E10
    ctx->pc = 0x31bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11792));
    // 0x31bc94: 0xc0450a6  jal         func_114298
    ctx->pc = 0x31BC94u;
    SET_GPR_U32(ctx, 31, 0x31BC9Cu);
    ctx->pc = 0x31BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BC94u;
            // 0x31bc98: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC9Cu; }
        if (ctx->pc != 0x31BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BC9Cu; }
        if (ctx->pc != 0x31BC9Cu) { return; }
    }
    ctx->pc = 0x31BC9Cu;
label_31bc9c:
    // 0x31bc9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31bc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bca0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x31bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x31bca4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BCA4u;
    {
        const bool branch_taken_0x31bca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCA4u;
            // 0x31bca8: 0x2410fc18  addiu       $s0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bca4) {
            ctx->pc = 0x31BCB4u;
            goto label_31bcb4;
        }
    }
    ctx->pc = 0x31BCACu;
    // 0x31bcac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31BCACu;
    {
        const bool branch_taken_0x31bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bcac) {
            ctx->pc = 0x31BCF8u;
            goto label_31bcf8;
        }
    }
    ctx->pc = 0x31BCB4u;
label_31bcb4:
    // 0x31bcb4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BCB4u;
    {
        const bool branch_taken_0x31bcb4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x31BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCB4u;
            // 0x31bcb8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcb4) {
            ctx->pc = 0x31BCC4u;
            goto label_31bcc4;
        }
    }
    ctx->pc = 0x31BCBCu;
    // 0x31bcbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31BCBCu;
    {
        const bool branch_taken_0x31bcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCBCu;
            // 0x31bcc0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcbc) {
            ctx->pc = 0x31BCF8u;
            goto label_31bcf8;
        }
    }
    ctx->pc = 0x31BCC4u;
label_31bcc4:
    // 0x31bcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcc8: 0xc045236  jal         func_1148D8
    ctx->pc = 0x31BCC8u;
    SET_GPR_U32(ctx, 31, 0x31BCD0u);
    ctx->pc = 0x31BCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCC8u;
            // 0x31bccc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BCD0u; }
        if (ctx->pc != 0x31BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BCD0u; }
        if (ctx->pc != 0x31BCD0u) { return; }
    }
    ctx->pc = 0x31BCD0u;
label_31bcd0:
    // 0x31bcd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcd4: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BCD4u;
    {
        const bool branch_taken_0x31bcd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x31BCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCD4u;
            // 0x31bcd8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcd4) {
            ctx->pc = 0x31BCF8u;
            goto label_31bcf8;
        }
    }
    ctx->pc = 0x31BCDCu;
    // 0x31bcdc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x31bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x31bce0: 0x24a52e20  addiu       $a1, $a1, 0x2E20
    ctx->pc = 0x31bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11808));
    // 0x31bce4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31BCE4u;
    SET_GPR_U32(ctx, 31, 0x31BCECu);
    ctx->pc = 0x31BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCE4u;
            // 0x31bce8: 0x2410fc17  addiu       $s0, $zero, -0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BCECu; }
        if (ctx->pc != 0x31BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BCECu; }
        if (ctx->pc != 0x31BCECu) { return; }
    }
    ctx->pc = 0x31BCECu;
label_31bcec:
    // 0x31bcec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BCECu;
    {
        const bool branch_taken_0x31bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bcec) {
            ctx->pc = 0x31BCF8u;
            goto label_31bcf8;
        }
    }
    ctx->pc = 0x31BCF4u;
    // 0x31bcf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31bcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bcf8:
    // 0x31bcf8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BCF8u;
    {
        const bool branch_taken_0x31bcf8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BCF8u;
            // 0x31bcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcf8) {
            ctx->pc = 0x31BD14u;
            goto label_31bd14;
        }
    }
    ctx->pc = 0x31BD00u;
    // 0x31bd00: 0xc045148  jal         func_114520
    ctx->pc = 0x31BD00u;
    SET_GPR_U32(ctx, 31, 0x31BD08u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD08u; }
        if (ctx->pc != 0x31BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD08u; }
        if (ctx->pc != 0x31BD08u) { return; }
    }
    ctx->pc = 0x31BD08u;
label_31bd08:
    // 0x31bd08: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BD08u;
    {
        const bool branch_taken_0x31bd08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31bd08) {
            ctx->pc = 0x31BD14u;
            goto label_31bd14;
        }
    }
    ctx->pc = 0x31BD10u;
    // 0x31bd10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bd14:
    // 0x31bd14: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BD14u;
    {
        const bool branch_taken_0x31bd14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD14u;
            // 0x31bd18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd14) {
            ctx->pc = 0x31BD38u;
            goto label_31bd38;
        }
    }
    ctx->pc = 0x31BD1Cu;
    // 0x31bd1c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bd20: 0xc045a00  jal         func_116800
    ctx->pc = 0x31BD20u;
    SET_GPR_U32(ctx, 31, 0x31BD28u);
    ctx->pc = 0x31BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD20u;
            // 0x31bd24: 0x24842d58  addiu       $a0, $a0, 0x2D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116800u;
    if (runtime->hasFunction(0x116800u)) {
        auto targetFn = runtime->lookupFunction(0x116800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD28u; }
        if (ctx->pc != 0x31BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceUmount_0x116800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD28u; }
        if (ctx->pc != 0x31BD28u) { return; }
    }
    ctx->pc = 0x31BD28u;
label_31bd28:
    // 0x31bd28: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BD28u;
    {
        const bool branch_taken_0x31bd28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31bd28) {
            ctx->pc = 0x31BD34u;
            goto label_31bd34;
        }
    }
    ctx->pc = 0x31BD30u;
    // 0x31bd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bd34:
    // 0x31bd34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31bd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bd38:
    // 0x31bd38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31bd3c:
    // 0x31bd3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31bd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bd40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31bd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31bd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bd48: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD48u;
            // 0x31bd4c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BD50u;
}
