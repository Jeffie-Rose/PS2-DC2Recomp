#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TransHdBd__Fiiii
// Address: 0x188b90 - 0x188e58
void TransHdBd__Fiiii_0x188b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransHdBd__Fiiii_0x188b90");
#endif

    switch (ctx->pc) {
        case 0x188bccu: goto label_188bcc;
        case 0x188bf4u: goto label_188bf4;
        case 0x188c14u: goto label_188c14;
        case 0x188c30u: goto label_188c30;
        case 0x188c44u: goto label_188c44;
        case 0x188c5cu: goto label_188c5c;
        case 0x188c70u: goto label_188c70;
        case 0x188c80u: goto label_188c80;
        case 0x188cb4u: goto label_188cb4;
        case 0x188cf4u: goto label_188cf4;
        case 0x188d1cu: goto label_188d1c;
        case 0x188d2cu: goto label_188d2c;
        case 0x188d34u: goto label_188d34;
        case 0x188d5cu: goto label_188d5c;
        case 0x188d74u: goto label_188d74;
        case 0x188d88u: goto label_188d88;
        case 0x188d90u: goto label_188d90;
        case 0x188dbcu: goto label_188dbc;
        case 0x188dd0u: goto label_188dd0;
        case 0x188df0u: goto label_188df0;
        case 0x188df8u: goto label_188df8;
        case 0x188e34u: goto label_188e34;
        default: break;
    }

    ctx->pc = 0x188b90u;

    // 0x188b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x188b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x188b94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x188b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x188b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188ba0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x188ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188ba8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x188ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188bb4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x188bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188bb8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x188BB8u;
    {
        const bool branch_taken_0x188bb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x188BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BB8u;
            // 0x188bbc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bb8) {
            ctx->pc = 0x188BE4u;
            goto label_188be4;
        }
    }
    ctx->pc = 0x188BC0u;
    // 0x188bc0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x188bc4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188BC4u;
    SET_GPR_U32(ctx, 31, 0x188BCCu);
    ctx->pc = 0x188BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188BC4u;
            // 0x188bc8: 0x248444d0  addiu       $a0, $a0, 0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BCCu; }
        if (ctx->pc != 0x188BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BCCu; }
        if (ctx->pc != 0x188BCCu) { return; }
    }
    ctx->pc = 0x188BCCu;
label_188bcc:
    // 0x188bcc: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188bd4: 0xac20234c  sw          $zero, 0x234C($at)
    ctx->pc = 0x188bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9036), GPR_U32(ctx, 0));
    // 0x188bd8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188bdc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x188BDCu;
    {
        const bool branch_taken_0x188bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BDCu;
            // 0x188be0: 0xac202344  sw          $zero, 0x2344($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bdc) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188BE4u;
label_188be4:
    // 0x188be4: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x188BE4u;
    {
        const bool branch_taken_0x188be4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x188BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BE4u;
            // 0x188be8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188be4) {
            ctx->pc = 0x188C0Cu;
            goto label_188c0c;
        }
    }
    ctx->pc = 0x188BECu;
    // 0x188bec: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188BECu;
    SET_GPR_U32(ctx, 31, 0x188BF4u);
    ctx->pc = 0x188BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188BECu;
            // 0x188bf0: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BF4u; }
        if (ctx->pc != 0x188BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BF4u; }
        if (ctx->pc != 0x188BF4u) { return; }
    }
    ctx->pc = 0x188BF4u;
label_188bf4:
    // 0x188bf4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188bf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188bfc: 0xac20234c  sw          $zero, 0x234C($at)
    ctx->pc = 0x188bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9036), GPR_U32(ctx, 0));
    // 0x188c00: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188c04: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x188C04u;
    {
        const bool branch_taken_0x188c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C04u;
            // 0x188c08: 0xac202344  sw          $zero, 0x2344($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c04) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188C0Cu;
label_188c0c:
    // 0x188c0c: 0xc045c0e  jal         func_117038
    ctx->pc = 0x188C0Cu;
    SET_GPR_U32(ctx, 31, 0x188C14u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C14u; }
        if (ctx->pc != 0x188C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C14u; }
        if (ctx->pc != 0x188C14u) { return; }
    }
    ctx->pc = 0x188C14u;
label_188c14:
    // 0x188c14: 0x2a610101  slti        $at, $s3, 0x101
    ctx->pc = 0x188c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x188c18: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x188C18u;
    {
        const bool branch_taken_0x188c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C18u;
            // 0x188c1c: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c18) {
            ctx->pc = 0x188C38u;
            goto label_188c38;
        }
    }
    ctx->pc = 0x188C20u;
    // 0x188c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c24: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x188c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x188c28: 0xc045c4c  jal         func_117130
    ctx->pc = 0x188C28u;
    SET_GPR_U32(ctx, 31, 0x188C30u);
    ctx->pc = 0x188C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C28u;
            // 0x188c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117130u;
    if (runtime->hasFunction(0x117130u)) {
        auto targetFn = runtime->lookupFunction(0x117130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C30u; }
        if (ctx->pc != 0x188C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x117130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C30u; }
        if (ctx->pc != 0x188C30u) { return; }
    }
    ctx->pc = 0x188C30u;
label_188c30:
    // 0x188c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x188C30u;
    {
        const bool branch_taken_0x188c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C30u;
            // 0x188c34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c30) {
            ctx->pc = 0x188C48u;
            goto label_188c48;
        }
    }
    ctx->pc = 0x188C38u;
label_188c38:
    // 0x188c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c3c: 0xc045c4c  jal         func_117130
    ctx->pc = 0x188C3Cu;
    SET_GPR_U32(ctx, 31, 0x188C44u);
    ctx->pc = 0x188C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C3Cu;
            // 0x188c40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117130u;
    if (runtime->hasFunction(0x117130u)) {
        auto targetFn = runtime->lookupFunction(0x117130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C44u; }
        if (ctx->pc != 0x188C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x117130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C44u; }
        if (ctx->pc != 0x188C44u) { return; }
    }
    ctx->pc = 0x188C44u;
label_188c44:
    // 0x188c44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188c48:
    // 0x188c48: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x188C48u;
    {
        const bool branch_taken_0x188c48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x188C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C48u;
            // 0x188c4c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c48) {
            ctx->pc = 0x188C64u;
            goto label_188c64;
        }
    }
    ctx->pc = 0x188C50u;
    // 0x188c50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x188c54: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188C54u;
    SET_GPR_U32(ctx, 31, 0x188C5Cu);
    ctx->pc = 0x188C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C54u;
            // 0x188c58: 0x24844530  addiu       $a0, $a0, 0x4530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C5Cu; }
        if (ctx->pc != 0x188C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C5Cu; }
        if (ctx->pc != 0x188C5Cu) { return; }
    }
    ctx->pc = 0x188C5Cu;
label_188c5c:
    // 0x188c5c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x188C5Cu;
    {
        const bool branch_taken_0x188c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C5Cu;
            // 0x188c60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c5c) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188C64u;
label_188c64:
    // 0x188c64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c68: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188C68u;
    SET_GPR_U32(ctx, 31, 0x188C70u);
    ctx->pc = 0x188C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C68u;
            // 0x188c6c: 0x24844560  addiu       $a0, $a0, 0x4560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C70u; }
        if (ctx->pc != 0x188C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C70u; }
        if (ctx->pc != 0x188C70u) { return; }
    }
    ctx->pc = 0x188C70u;
label_188c70:
    // 0x188c70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x188c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x188c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c78: 0xc062cc4  jal         func_18B310
    ctx->pc = 0x188C78u;
    SET_GPR_U32(ctx, 31, 0x188C80u);
    ctx->pc = 0x188C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C78u;
            // 0x188c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B310u;
    if (runtime->hasFunction(0x18B310u)) {
        auto targetFn = runtime->lookupFunction(0x18B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C80u; }
        if (ctx->pc != 0x188C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezTransToIOP2__FPvPvi_0x18b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C80u; }
        if (ctx->pc != 0x188C80u) { return; }
    }
    ctx->pc = 0x188C80u;
label_188c80:
    // 0x188c80: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188c84: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x188c88: 0xac322344  sw          $s2, 0x2344($at)
    ctx->pc = 0x188c88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9028), GPR_U32(ctx, 18));
    // 0x188c8c: 0x24844580  addiu       $a0, $a0, 0x4580
    ctx->pc = 0x188c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x188c90: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188c94: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x188c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x188c98: 0xac30234c  sw          $s0, 0x234C($at)
    ctx->pc = 0x188c98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9036), GPR_U32(ctx, 16));
    // 0x188c9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ca0: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188ca4: 0x8c252350  lw          $a1, 0x2350($at)
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9040)));
    // 0x188ca8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188cac: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188CACu;
    SET_GPR_U32(ctx, 31, 0x188CB4u);
    ctx->pc = 0x188CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188CACu;
            // 0x188cb0: 0xac222348  sw          $v0, 0x2348($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CB4u; }
        if (ctx->pc != 0x188CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CB4u; }
        if (ctx->pc != 0x188CB4u) { return; }
    }
    ctx->pc = 0x188CB4u;
label_188cb4:
    // 0x188cb4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188cb8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x188cbc: 0x8c252350  lw          $a1, 0x2350($at)
    ctx->pc = 0x188cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9040)));
    // 0x188cc0: 0x3442ae20  ori         $v0, $v0, 0xAE20
    ctx->pc = 0x188cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44576);
    // 0x188cc4: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x188cc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188cc8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x188CC8u;
    {
        const bool branch_taken_0x188cc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188CC8u;
            // 0x188ccc: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cc8) {
            ctx->pc = 0x188CF8u;
            goto label_188cf8;
        }
    }
    ctx->pc = 0x188CD0u;
    // 0x188cd0: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x188cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x188cd4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x188cd8: 0x3421ae21  ori         $at, $at, 0xAE21
    ctx->pc = 0x188cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44577);
    // 0x188cdc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x188cdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x188ce0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x188CE0u;
    {
        const bool branch_taken_0x188ce0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x188CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188CE0u;
            // 0x188ce4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ce0) {
            ctx->pc = 0x188CF4u;
            goto label_188cf4;
        }
    }
    ctx->pc = 0x188CE8u;
    // 0x188ce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cec: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x188CECu;
    SET_GPR_U32(ctx, 31, 0x188CF4u);
    ctx->pc = 0x188CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188CECu;
            // 0x188cf0: 0x248445d0  addiu       $a0, $a0, 0x45D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CF4u; }
        if (ctx->pc != 0x188CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CF4u; }
        if (ctx->pc != 0x188CF4u) { return; }
    }
    ctx->pc = 0x188CF4u;
label_188cf4:
    // 0x188cf4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_188cf8:
    // 0x188cf8: 0x3421de01  ori         $at, $at, 0xDE01
    ctx->pc = 0x188cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56833);
    // 0x188cfc: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x188cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x188d00: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x188D00u;
    {
        const bool branch_taken_0x188d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D00u;
            // 0x188d04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d00) {
            ctx->pc = 0x188D64u;
            goto label_188d64;
        }
    }
    ctx->pc = 0x188D08u;
    // 0x188d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188d0c: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x188d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x188d10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d14: 0xc046454  jal         func_119150
    ctx->pc = 0x188D14u;
    SET_GPR_U32(ctx, 31, 0x188D1Cu);
    ctx->pc = 0x188D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D14u;
            // 0x188d18: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D1Cu; }
        if (ctx->pc != 0x188D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D1Cu; }
        if (ctx->pc != 0x188D1Cu) { return; }
    }
    ctx->pc = 0x188D1Cu;
label_188d1c:
    // 0x188d1c: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x188d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x188d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d24: 0xc062cc4  jal         func_18B310
    ctx->pc = 0x188D24u;
    SET_GPR_U32(ctx, 31, 0x188D2Cu);
    ctx->pc = 0x188D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D24u;
            // 0x188d28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B310u;
    if (runtime->hasFunction(0x18B310u)) {
        auto targetFn = runtime->lookupFunction(0x18B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D2Cu; }
        if (ctx->pc != 0x188D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezTransToIOP2__FPvPvi_0x18b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D2Cu; }
        if (ctx->pc != 0x188D2Cu) { return; }
    }
    ctx->pc = 0x188D2Cu;
label_188d2c:
    // 0x188d2c: 0xc0440d8  jal         func_110360
    ctx->pc = 0x188D2Cu;
    SET_GPR_U32(ctx, 31, 0x188D34u);
    ctx->pc = 0x188D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D2Cu;
            // 0x188d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D34u; }
        if (ctx->pc != 0x188D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D34u; }
        if (ctx->pc != 0x188D34u) { return; }
    }
    ctx->pc = 0x188D34u;
label_188d34:
    // 0x188d34: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188d38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188d3c: 0x8c282348  lw          $t0, 0x2348($at)
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9032)));
    // 0x188d40: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x188d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d44: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x188d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x188d48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d4c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188d50: 0x8c292350  lw          $t1, 0x2350($at)
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9040)));
    // 0x188d54: 0xc046454  jal         func_119150
    ctx->pc = 0x188D54u;
    SET_GPR_U32(ctx, 31, 0x188D5Cu);
    ctx->pc = 0x188D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D54u;
            // 0x188d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D5Cu; }
        if (ctx->pc != 0x188D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D5Cu; }
        if (ctx->pc != 0x188D5Cu) { return; }
    }
    ctx->pc = 0x188D5Cu;
label_188d5c:
    // 0x188d5c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x188D5Cu;
    {
        const bool branch_taken_0x188d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D5Cu;
            // 0x188d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d5c) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188D64u;
label_188d64:
    // 0x188d64: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x188d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x188d68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d6c: 0xc046454  jal         func_119150
    ctx->pc = 0x188D6Cu;
    SET_GPR_U32(ctx, 31, 0x188D74u);
    ctx->pc = 0x188D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D6Cu;
            // 0x188d70: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D74u; }
        if (ctx->pc != 0x188D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D74u; }
        if (ctx->pc != 0x188D74u) { return; }
    }
    ctx->pc = 0x188D74u;
label_188d74:
    // 0x188d74: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x188d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x188d78: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x188d7c: 0x3446dd00  ori         $a2, $v0, 0xDD00
    ctx->pc = 0x188d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56576);
    // 0x188d80: 0xc062cc4  jal         func_18B310
    ctx->pc = 0x188D80u;
    SET_GPR_U32(ctx, 31, 0x188D88u);
    ctx->pc = 0x188D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D80u;
            // 0x188d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B310u;
    if (runtime->hasFunction(0x18B310u)) {
        auto targetFn = runtime->lookupFunction(0x18B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D88u; }
        if (ctx->pc != 0x188D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezTransToIOP2__FPvPvi_0x18b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D88u; }
        if (ctx->pc != 0x188D88u) { return; }
    }
    ctx->pc = 0x188D88u;
label_188d88:
    // 0x188d88: 0xc0440d8  jal         func_110360
    ctx->pc = 0x188D88u;
    SET_GPR_U32(ctx, 31, 0x188D90u);
    ctx->pc = 0x188D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D88u;
            // 0x188d8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D90u; }
        if (ctx->pc != 0x188D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D90u; }
        if (ctx->pc != 0x188D90u) { return; }
    }
    ctx->pc = 0x188D90u;
label_188d90:
    // 0x188d90: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188d94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188d98: 0x8c282348  lw          $t0, 0x2348($at)
    ctx->pc = 0x188d98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9032)));
    // 0x188d9c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x188d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x188da0: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x188da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x188da4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dac: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188db0: 0x8c292350  lw          $t1, 0x2350($at)
    ctx->pc = 0x188db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9040)));
    // 0x188db4: 0xc046454  jal         func_119150
    ctx->pc = 0x188DB4u;
    SET_GPR_U32(ctx, 31, 0x188DBCu);
    ctx->pc = 0x188DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DB4u;
            // 0x188db8: 0x344add00  ori         $t2, $v0, 0xDD00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56576);
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DBCu; }
        if (ctx->pc != 0x188DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DBCu; }
        if (ctx->pc != 0x188DBCu) { return; }
    }
    ctx->pc = 0x188DBCu;
label_188dbc:
    // 0x188dbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188dc0: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x188dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x188dc4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dc8: 0xc046454  jal         func_119150
    ctx->pc = 0x188DC8u;
    SET_GPR_U32(ctx, 31, 0x188DD0u);
    ctx->pc = 0x188DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DC8u;
            // 0x188dcc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DD0u; }
        if (ctx->pc != 0x188DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DD0u; }
        if (ctx->pc != 0x188DD0u) { return; }
    }
    ctx->pc = 0x188DD0u;
label_188dd0:
    // 0x188dd0: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x188dd4: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x188dd8: 0x3443dd00  ori         $v1, $v0, 0xDD00
    ctx->pc = 0x188dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56576);
    // 0x188ddc: 0x3c02fff9  lui         $v0, 0xFFF9
    ctx->pc = 0x188ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65529 << 16));
    // 0x188de0: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x188de4: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x188de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x188de8: 0xc062cc4  jal         func_18B310
    ctx->pc = 0x188DE8u;
    SET_GPR_U32(ctx, 31, 0x188DF0u);
    ctx->pc = 0x188DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DE8u;
            // 0x188dec: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B310u;
    if (runtime->hasFunction(0x18B310u)) {
        auto targetFn = runtime->lookupFunction(0x18B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DF0u; }
        if (ctx->pc != 0x188DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezTransToIOP2__FPvPvi_0x18b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DF0u; }
        if (ctx->pc != 0x188DF0u) { return; }
    }
    ctx->pc = 0x188DF0u;
label_188df0:
    // 0x188df0: 0xc0440d8  jal         func_110360
    ctx->pc = 0x188DF0u;
    SET_GPR_U32(ctx, 31, 0x188DF8u);
    ctx->pc = 0x188DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DF0u;
            // 0x188df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DF8u; }
        if (ctx->pc != 0x188DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DF8u; }
        if (ctx->pc != 0x188DF8u) { return; }
    }
    ctx->pc = 0x188DF8u;
label_188df8:
    // 0x188df8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188dfc: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x188dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x188e00: 0x8c292350  lw          $t1, 0x2350($at)
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9040)));
    // 0x188e04: 0x3443dd00  ori         $v1, $v0, 0xDD00
    ctx->pc = 0x188e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56576);
    // 0x188e08: 0x3c02fff9  lui         $v0, 0xFFF9
    ctx->pc = 0x188e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65529 << 16));
    // 0x188e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188e10: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x188e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x188e14: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x188e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x188e18: 0x2025021  addu        $t2, $s0, $v0
    ctx->pc = 0x188e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x188e1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e24: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x188e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x188e28: 0x8c282348  lw          $t0, 0x2348($at)
    ctx->pc = 0x188e28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9032)));
    // 0x188e2c: 0xc046454  jal         func_119150
    ctx->pc = 0x188E2Cu;
    SET_GPR_U32(ctx, 31, 0x188E34u);
    ctx->pc = 0x188E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188E2Cu;
            // 0x188e30: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E34u; }
        if (ctx->pc != 0x188E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E34u; }
        if (ctx->pc != 0x188E34u) { return; }
    }
    ctx->pc = 0x188E34u;
label_188e34:
    // 0x188e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188e38:
    // 0x188e38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x188e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188e3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188e40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188e44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e50: 0x3e00008  jr          $ra
    ctx->pc = 0x188E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188E50u;
            // 0x188e54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188E58u;
}
