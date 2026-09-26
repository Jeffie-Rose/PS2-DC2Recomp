#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeInfoTxt__11sndPortInfoFiPciP9mgCMemory
// Address: 0x18fb00 - 0x18ff64
void LoadSeInfoTxt__11sndPortInfoFiPciP9mgCMemory_0x18fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeInfoTxt__11sndPortInfoFiPciP9mgCMemory_0x18fb00");
#endif

    switch (ctx->pc) {
        case 0x18fbe0u: goto label_18fbe0;
        case 0x18fbf0u: goto label_18fbf0;
        case 0x18fc04u: goto label_18fc04;
        case 0x18fc50u: goto label_18fc50;
        case 0x18fc68u: goto label_18fc68;
        case 0x18fc84u: goto label_18fc84;
        case 0x18fc9cu: goto label_18fc9c;
        case 0x18fcb8u: goto label_18fcb8;
        case 0x18fcccu: goto label_18fccc;
        case 0x18fce4u: goto label_18fce4;
        case 0x18fd00u: goto label_18fd00;
        case 0x18fd20u: goto label_18fd20;
        case 0x18fd40u: goto label_18fd40;
        case 0x18fd60u: goto label_18fd60;
        case 0x18fd80u: goto label_18fd80;
        case 0x18fda0u: goto label_18fda0;
        case 0x18fdc0u: goto label_18fdc0;
        case 0x18fde0u: goto label_18fde0;
        case 0x18fe00u: goto label_18fe00;
        case 0x18fe20u: goto label_18fe20;
        case 0x18fe38u: goto label_18fe38;
        case 0x18fe70u: goto label_18fe70;
        case 0x18feb4u: goto label_18feb4;
        case 0x18fec4u: goto label_18fec4;
        case 0x18fed0u: goto label_18fed0;
        case 0x18ff10u: goto label_18ff10;
        default: break;
    }

    ctx->pc = 0x18fb00u;

    // 0x18fb00: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x18fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x18fb04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18fb08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18fb0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18fb10: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x18fb10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18fb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18fb1c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x18fb1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18fb24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18fb24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18fb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18fb30: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FB30u;
    {
        const bool branch_taken_0x18fb30 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18FB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB30u;
            // 0x18fb34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb30) {
            ctx->pc = 0x18FB48u;
            goto label_18fb48;
        }
    }
    ctx->pc = 0x18FB38u;
    // 0x18fb38: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x18fb3c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18fb3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18fb40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FB40u;
    {
        const bool branch_taken_0x18fb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB40u;
            // 0x18fb44: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb40) {
            ctx->pc = 0x18FB50u;
            goto label_18fb50;
        }
    }
    ctx->pc = 0x18FB48u;
label_18fb48:
    // 0x18fb48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18FB48u;
    {
        const bool branch_taken_0x18fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB48u;
            // 0x18fb4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb48) {
            ctx->pc = 0x18FB60u;
            goto label_18fb60;
        }
    }
    ctx->pc = 0x18FB50u;
label_18fb50:
    // 0x18fb50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18fb54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18fb58: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x18fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x18fb5c: 0x2472000c  addiu       $s2, $v1, 0xC
    ctx->pc = 0x18fb5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18fb60:
    // 0x18fb60: 0x124000f5  beqz        $s2, . + 4 + (0xF5 << 2)
    ctx->pc = 0x18FB60u;
    {
        const bool branch_taken_0x18fb60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb60) {
            ctx->pc = 0x18FF38u;
            goto label_18ff38;
        }
    }
    ctx->pc = 0x18FB68u;
    // 0x18fb68: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18fb6c: 0x2878021  addu        $s0, $s4, $a3
    ctx->pc = 0x18fb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x18fb70: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
    // 0x18fb74: 0x27ac0150  addiu       $t4, $sp, 0x150
    ctx->pc = 0x18fb74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x18fb78: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x18fb78u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fb7c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x18fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fb80: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x18fb80u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18fb84: 0x27a90180  addiu       $t1, $sp, 0x180
    ctx->pc = 0x18fb84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x18fb88: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x18fb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18fb8c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18fb90: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x18fb94: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x18fb98: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x18fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x18fb9c: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x18fba0: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x18fba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18fba4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x18fba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fba8: 0x7d8b0000  sq          $t3, 0x0($t4)
    ctx->pc = 0x18fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 11));
    // 0x18fbac: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x18fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x18fbb0: 0x7d8a0010  sq          $t2, 0x10($t4)
    ctx->pc = 0x18fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 10));
    // 0x18fbb4: 0xe5800020  swc1        $f0, 0x20($t4)
    ctx->pc = 0x18fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 32), bits); }
    // 0x18fbb8: 0xafa90150  sw          $t1, 0x150($sp)
    ctx->pc = 0x18fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 9));
    // 0x18fbbc: 0xafa80154  sw          $t0, 0x154($sp)
    ctx->pc = 0x18fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 8));
    // 0x18fbc0: 0xafa70158  sw          $a3, 0x158($sp)
    ctx->pc = 0x18fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 7));
    // 0x18fbc4: 0xafa6015c  sw          $a2, 0x15C($sp)
    ctx->pc = 0x18fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 6));
    // 0x18fbc8: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x18fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x18fbcc: 0xafa40164  sw          $a0, 0x164($sp)
    ctx->pc = 0x18fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 4));
    // 0x18fbd0: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x18fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x18fbd4: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x18fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x18fbd8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x18FBD8u;
    {
        const bool branch_taken_0x18fbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FBD8u;
            // 0x18fbdc: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbd8) {
            ctx->pc = 0x18FC20u;
            goto label_18fc20;
        }
    }
    ctx->pc = 0x18FBE0u;
label_18fbe0:
    // 0x18fbe0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18fbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fbe4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x18fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x18fbe8: 0xc063df8  jal         func_18F7E0
    ctx->pc = 0x18FBE8u;
    SET_GPR_U32(ctx, 31, 0x18FBF0u);
    ctx->pc = 0x18FBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FBE8u;
            // 0x18fbec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F7E0u;
    if (runtime->hasFunction(0x18F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x18F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBF0u; }
        if (ctx->pc != 0x18FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__FPPcPcPc_0x18f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBF0u; }
        if (ctx->pc != 0x18FBF0u) { return; }
    }
    ctx->pc = 0x18FBF0u;
label_18fbf0:
    // 0x18fbf0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x18fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18fbf4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fbf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18fbf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fbfc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FBFCu;
    SET_GPR_U32(ctx, 31, 0x18FC04u);
    ctx->pc = 0x18FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FBFCu;
            // 0x18fc00: 0x24a54ad0  addiu       $a1, $a1, 0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC04u; }
        if (ctx->pc != 0x18FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC04u; }
        if (ctx->pc != 0x18FC04u) { return; }
    }
    ctx->pc = 0x18FC04u;
label_18fc04:
    // 0x18fc04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FC04u;
    {
        const bool branch_taken_0x18fc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc04) {
            ctx->pc = 0x18FC20u;
            goto label_18fc20;
        }
    }
    ctx->pc = 0x18FC0Cu;
    // 0x18fc0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x18fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18fc10: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x18fc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18fc14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18fc18: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18FC18u;
    {
        const bool branch_taken_0x18fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC18u;
            // 0x18fc1c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc18) {
            ctx->pc = 0x18FBE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18fbe0;
        }
    }
    ctx->pc = 0x18FC20u;
label_18fc20:
    // 0x18fc20: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x18fc20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18fc24: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x18fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x18fc28: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18fc2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18fc30: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x18fc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18fc34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC34u;
    {
        const bool branch_taken_0x18fc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC34u;
            // 0x18fc38: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc34) {
            ctx->pc = 0x18FC44u;
            goto label_18fc44;
        }
    }
    ctx->pc = 0x18FC3Cu;
    // 0x18fc3c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18fc40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18fc44:
    // 0x18fc44: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x18fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18fc48: 0xc04e748  jal         func_139D20
    ctx->pc = 0x18FC48u;
    SET_GPR_U32(ctx, 31, 0x18FC50u);
    ctx->pc = 0x18FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC48u;
            // 0x18fc4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC50u; }
        if (ctx->pc != 0x18FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC50u; }
        if (ctx->pc != 0x18FC50u) { return; }
    }
    ctx->pc = 0x18FC50u;
label_18fc50:
    // 0x18fc50: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x18fc54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc58: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x18fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18fc5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18fc60: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x18FC60u;
    SET_GPR_U32(ctx, 31, 0x18FC68u);
    ctx->pc = 0x18FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC60u;
            // 0x18fc64: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC68u; }
        if (ctx->pc != 0x18FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC68u; }
        if (ctx->pc != 0x18FC68u) { return; }
    }
    ctx->pc = 0x18FC68u;
label_18fc68:
    // 0x18fc68: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x18fc6c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x18fc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc74: 0x24a5ff70  addiu       $a1, $a1, -0x90
    ctx->pc = 0x18fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967152));
    // 0x18fc78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18fc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc7c: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x18FC7Cu;
    SET_GPR_U32(ctx, 31, 0x18FC84u);
    ctx->pc = 0x18FC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC7Cu;
            // 0x18fc80: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC84u; }
        if (ctx->pc != 0x18FC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC84u; }
        if (ctx->pc != 0x18FC84u) { return; }
    }
    ctx->pc = 0x18FC84u;
label_18fc84:
    // 0x18fc84: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x18fc84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18fc88: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x18fc8c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x18fc8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc90: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
    ctx->pc = 0x18FC90u;
    {
        const bool branch_taken_0x18fc90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC90u;
            // 0x18fc94: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc90) {
            ctx->pc = 0x18FF34u;
            goto label_18ff34;
        }
    }
    ctx->pc = 0x18FC98u;
    // 0x18fc98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18fc98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fc9c:
    // 0x18fc9c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x18fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18fca0: 0x2c3082a  slt         $at, $s6, $v1
    ctx->pc = 0x18fca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18fca4: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
    ctx->pc = 0x18FCA4u;
    {
        const bool branch_taken_0x18fca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCA4u;
            // 0x18fca8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fca4) {
            ctx->pc = 0x18FF34u;
            goto label_18ff34;
        }
    }
    ctx->pc = 0x18FCACu;
    // 0x18fcac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x18fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x18fcb0: 0xc063df8  jal         func_18F7E0
    ctx->pc = 0x18FCB0u;
    SET_GPR_U32(ctx, 31, 0x18FCB8u);
    ctx->pc = 0x18FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCB0u;
            // 0x18fcb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F7E0u;
    if (runtime->hasFunction(0x18F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x18F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCB8u; }
        if (ctx->pc != 0x18FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__FPPcPcPc_0x18f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCB8u; }
        if (ctx->pc != 0x18FCB8u) { return; }
    }
    ctx->pc = 0x18FCB8u;
label_18fcb8:
    // 0x18fcb8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x18fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18fcbc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fcc0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18fcc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcc4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FCC4u;
    SET_GPR_U32(ctx, 31, 0x18FCCCu);
    ctx->pc = 0x18FCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCC4u;
            // 0x18fcc8: 0x24a54ad0  addiu       $a1, $a1, 0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCCCu; }
        if (ctx->pc != 0x18FCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCCCu; }
        if (ctx->pc != 0x18FCCCu) { return; }
    }
    ctx->pc = 0x18FCCCu;
label_18fccc:
    // 0x18fccc: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x18FCCCu;
    {
        const bool branch_taken_0x18fccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fccc) {
            ctx->pc = 0x18FF34u;
            goto label_18ff34;
        }
    }
    ctx->pc = 0x18FCD4u;
    // 0x18fcd4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x18fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18fcd8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fcdc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FCDCu;
    SET_GPR_U32(ctx, 31, 0x18FCE4u);
    ctx->pc = 0x18FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCDCu;
            // 0x18fce0: 0x24a54ad8  addiu       $a1, $a1, 0x4AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCE4u; }
        if (ctx->pc != 0x18FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCE4u; }
        if (ctx->pc != 0x18FCE4u) { return; }
    }
    ctx->pc = 0x18FCE4u;
label_18fce4:
    // 0x18fce4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x18FCE4u;
    {
        const bool branch_taken_0x18fce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCE4u;
            // 0x18fce8: 0x27b30154  addiu       $s3, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fce4) {
            ctx->pc = 0x18FE78u;
            goto label_18fe78;
        }
    }
    ctx->pc = 0x18FCECu;
    // 0x18fcec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fcf0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fcf4: 0x24a54ae0  addiu       $a1, $a1, 0x4AE0
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19168));
    // 0x18fcf8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FCF8u;
    SET_GPR_U32(ctx, 31, 0x18FD00u);
    ctx->pc = 0x18FCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCF8u;
            // 0x18fcfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD00u; }
        if (ctx->pc != 0x18FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD00u; }
        if (ctx->pc != 0x18FD00u) { return; }
    }
    ctx->pc = 0x18FD00u;
label_18fd00:
    // 0x18fd00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD00u;
    {
        const bool branch_taken_0x18fd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd00) {
            ctx->pc = 0x18FD0Cu;
            goto label_18fd0c;
        }
    }
    ctx->pc = 0x18FD08u;
    // 0x18fd08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fd0c:
    // 0x18fd0c: 0x0  nop
    ctx->pc = 0x18fd0cu;
    // NOP
    // 0x18fd10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fd14: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fd18: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FD18u;
    SET_GPR_U32(ctx, 31, 0x18FD20u);
    ctx->pc = 0x18FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD18u;
            // 0x18fd1c: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD20u; }
        if (ctx->pc != 0x18FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD20u; }
        if (ctx->pc != 0x18FD20u) { return; }
    }
    ctx->pc = 0x18FD20u;
label_18fd20:
    // 0x18fd20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD20u;
    {
        const bool branch_taken_0x18fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd20) {
            ctx->pc = 0x18FD2Cu;
            goto label_18fd2c;
        }
    }
    ctx->pc = 0x18FD28u;
    // 0x18fd28: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x18fd28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18fd2c:
    // 0x18fd2c: 0x0  nop
    ctx->pc = 0x18fd2cu;
    // NOP
    // 0x18fd30: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fd34: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fd38: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FD38u;
    SET_GPR_U32(ctx, 31, 0x18FD40u);
    ctx->pc = 0x18FD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD38u;
            // 0x18fd3c: 0x24a54af8  addiu       $a1, $a1, 0x4AF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD40u; }
        if (ctx->pc != 0x18FD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD40u; }
        if (ctx->pc != 0x18FD40u) { return; }
    }
    ctx->pc = 0x18FD40u;
label_18fd40:
    // 0x18fd40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD40u;
    {
        const bool branch_taken_0x18fd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd40) {
            ctx->pc = 0x18FD4Cu;
            goto label_18fd4c;
        }
    }
    ctx->pc = 0x18FD48u;
    // 0x18fd48: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18fd4c:
    // 0x18fd4c: 0x0  nop
    ctx->pc = 0x18fd4cu;
    // NOP
    // 0x18fd50: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fd54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fd58: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FD58u;
    SET_GPR_U32(ctx, 31, 0x18FD60u);
    ctx->pc = 0x18FD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD58u;
            // 0x18fd5c: 0x24a54b08  addiu       $a1, $a1, 0x4B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD60u; }
        if (ctx->pc != 0x18FD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD60u; }
        if (ctx->pc != 0x18FD60u) { return; }
    }
    ctx->pc = 0x18FD60u;
label_18fd60:
    // 0x18fd60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD60u;
    {
        const bool branch_taken_0x18fd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd60) {
            ctx->pc = 0x18FD6Cu;
            goto label_18fd6c;
        }
    }
    ctx->pc = 0x18FD68u;
    // 0x18fd68: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x18fd68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18fd6c:
    // 0x18fd6c: 0x0  nop
    ctx->pc = 0x18fd6cu;
    // NOP
    // 0x18fd70: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fd74: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fd78: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FD78u;
    SET_GPR_U32(ctx, 31, 0x18FD80u);
    ctx->pc = 0x18FD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD78u;
            // 0x18fd7c: 0x24a54b18  addiu       $a1, $a1, 0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD80u; }
        if (ctx->pc != 0x18FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD80u; }
        if (ctx->pc != 0x18FD80u) { return; }
    }
    ctx->pc = 0x18FD80u;
label_18fd80:
    // 0x18fd80: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FD80u;
    {
        const bool branch_taken_0x18fd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd80) {
            ctx->pc = 0x18FD8Cu;
            goto label_18fd8c;
        }
    }
    ctx->pc = 0x18FD88u;
    // 0x18fd88: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18fd8c:
    // 0x18fd8c: 0x0  nop
    ctx->pc = 0x18fd8cu;
    // NOP
    // 0x18fd90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fd94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fd98: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FD98u;
    SET_GPR_U32(ctx, 31, 0x18FDA0u);
    ctx->pc = 0x18FD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD98u;
            // 0x18fd9c: 0x24a54b20  addiu       $a1, $a1, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDA0u; }
        if (ctx->pc != 0x18FDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDA0u; }
        if (ctx->pc != 0x18FDA0u) { return; }
    }
    ctx->pc = 0x18FDA0u;
label_18fda0:
    // 0x18fda0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FDA0u;
    {
        const bool branch_taken_0x18fda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fda0) {
            ctx->pc = 0x18FDACu;
            goto label_18fdac;
        }
    }
    ctx->pc = 0x18FDA8u;
    // 0x18fda8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18fdac:
    // 0x18fdac: 0x0  nop
    ctx->pc = 0x18fdacu;
    // NOP
    // 0x18fdb0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fdb4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fdb8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FDB8u;
    SET_GPR_U32(ctx, 31, 0x18FDC0u);
    ctx->pc = 0x18FDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDB8u;
            // 0x18fdbc: 0x24a54b28  addiu       $a1, $a1, 0x4B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDC0u; }
        if (ctx->pc != 0x18FDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDC0u; }
        if (ctx->pc != 0x18FDC0u) { return; }
    }
    ctx->pc = 0x18FDC0u;
label_18fdc0:
    // 0x18fdc0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FDC0u;
    {
        const bool branch_taken_0x18fdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fdc0) {
            ctx->pc = 0x18FDCCu;
            goto label_18fdcc;
        }
    }
    ctx->pc = 0x18FDC8u;
    // 0x18fdc8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x18fdc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18fdcc:
    // 0x18fdcc: 0x0  nop
    ctx->pc = 0x18fdccu;
    // NOP
    // 0x18fdd0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fdd4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fdd8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FDD8u;
    SET_GPR_U32(ctx, 31, 0x18FDE0u);
    ctx->pc = 0x18FDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDD8u;
            // 0x18fddc: 0x24a54b30  addiu       $a1, $a1, 0x4B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDE0u; }
        if (ctx->pc != 0x18FDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDE0u; }
        if (ctx->pc != 0x18FDE0u) { return; }
    }
    ctx->pc = 0x18FDE0u;
label_18fde0:
    // 0x18fde0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FDE0u;
    {
        const bool branch_taken_0x18fde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fde0) {
            ctx->pc = 0x18FDECu;
            goto label_18fdec;
        }
    }
    ctx->pc = 0x18FDE8u;
    // 0x18fde8: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18fdec:
    // 0x18fdec: 0x0  nop
    ctx->pc = 0x18fdecu;
    // NOP
    // 0x18fdf0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fdf4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fdf8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FDF8u;
    SET_GPR_U32(ctx, 31, 0x18FE00u);
    ctx->pc = 0x18FDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDF8u;
            // 0x18fdfc: 0x24a54b38  addiu       $a1, $a1, 0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE00u; }
        if (ctx->pc != 0x18FE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE00u; }
        if (ctx->pc != 0x18FE00u) { return; }
    }
    ctx->pc = 0x18FE00u;
label_18fe00:
    // 0x18fe00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FE00u;
    {
        const bool branch_taken_0x18fe00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fe00) {
            ctx->pc = 0x18FE0Cu;
            goto label_18fe0c;
        }
    }
    ctx->pc = 0x18FE08u;
    // 0x18fe08: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x18fe08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_18fe0c:
    // 0x18fe0c: 0x0  nop
    ctx->pc = 0x18fe0cu;
    // NOP
    // 0x18fe10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18fe14: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18fe18: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18FE18u;
    SET_GPR_U32(ctx, 31, 0x18FE20u);
    ctx->pc = 0x18FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE18u;
            // 0x18fe1c: 0x24a54b40  addiu       $a1, $a1, 0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE20u; }
        if (ctx->pc != 0x18FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE20u; }
        if (ctx->pc != 0x18FE20u) { return; }
    }
    ctx->pc = 0x18FE20u;
label_18fe20:
    // 0x18fe20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FE20u;
    {
        const bool branch_taken_0x18fe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fe20) {
            ctx->pc = 0x18FE2Cu;
            goto label_18fe2c;
        }
    }
    ctx->pc = 0x18FE28u;
    // 0x18fe28: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x18fe28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18fe2c:
    // 0x18fe2c: 0x0  nop
    ctx->pc = 0x18fe2cu;
    // NOP
    // 0x18fe30: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x18FE30u;
    SET_GPR_U32(ctx, 31, 0x18FE38u);
    ctx->pc = 0x18FE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE30u;
            // 0x18fe34: 0x8fa40158  lw          $a0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE38u; }
        if (ctx->pc != 0x18FE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE38u; }
        if (ctx->pc != 0x18FE38u) { return; }
    }
    ctx->pc = 0x18FE38u;
label_18fe38:
    // 0x18fe38: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18fe3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe40: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FE40u;
    {
        const bool branch_taken_0x18fe40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE40u;
            // 0x18fe44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe40) {
            ctx->pc = 0x18FE4Cu;
            goto label_18fe4c;
        }
    }
    ctx->pc = 0x18FE48u;
    // 0x18fe48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fe4c:
    // 0x18fe4c: 0x0  nop
    ctx->pc = 0x18fe4cu;
    // NOP
    // 0x18fe50: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18fe54: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18FE54u;
    {
        const bool branch_taken_0x18fe54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18fe54) {
            ctx->pc = 0x18FE60u;
            goto label_18fe60;
        }
    }
    ctx->pc = 0x18FE5Cu;
    // 0x18fe5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fe60:
    // 0x18fe60: 0x4a00031  bltz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18FE60u;
    {
        const bool branch_taken_0x18fe60 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18FE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE60u;
            // 0x18fe64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe60) {
            ctx->pc = 0x18FF28u;
            goto label_18ff28;
        }
    }
    ctx->pc = 0x18FE68u;
    // 0x18fe68: 0xc062250  jal         func_188940
    ctx->pc = 0x18FE68u;
    SET_GPR_U32(ctx, 31, 0x18FE70u);
    ctx->pc = 0x18FE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE68u;
            // 0x18fe6c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188940u;
    if (runtime->hasFunction(0x188940u)) {
        auto targetFn = runtime->lookupFunction(0x188940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE70u; }
        if (ctx->pc != 0x18FE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReverb__6CSoundFiii_0x188940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE70u; }
        if (ctx->pc != 0x18FE70u) { return; }
    }
    ctx->pc = 0x18FE70u;
label_18fe70:
    // 0x18fe70: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18FE70u;
    {
        const bool branch_taken_0x18fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe70) {
            ctx->pc = 0x18FF28u;
            goto label_18ff28;
        }
    }
    ctx->pc = 0x18FE78u;
label_18fe78:
    // 0x18fe78: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18fe7c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fe80: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x18fe80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x18fe84: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x18FE84u;
    {
        const bool branch_taken_0x18fe84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE84u;
            // 0x18fe88: 0x2881003a  slti        $at, $a0, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe84) {
            ctx->pc = 0x18FF28u;
            goto label_18ff28;
        }
    }
    ctx->pc = 0x18FE8Cu;
    // 0x18fe8c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x18FE8Cu;
    {
        const bool branch_taken_0x18fe8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe8c) {
            ctx->pc = 0x18FF28u;
            goto label_18ff28;
        }
    }
    ctx->pc = 0x18FE94u;
    // 0x18fe94: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18fe98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe9c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x18fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18fea0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18fea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x18fea4: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x18fea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18fea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18feac: 0xc049c86  jal         func_127218
    ctx->pc = 0x18FEACu;
    SET_GPR_U32(ctx, 31, 0x18FEB4u);
    ctx->pc = 0x18FEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEACu;
            // 0x18feb0: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEB4u; }
        if (ctx->pc != 0x18FEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEB4u; }
        if (ctx->pc != 0x18FEB4u) { return; }
    }
    ctx->pc = 0x18FEB4u;
label_18feb4:
    // 0x18feb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18feb8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x18febc: 0xc063e68  jal         func_18F9A0
    ctx->pc = 0x18FEBCu;
    SET_GPR_U32(ctx, 31, 0x18FEC4u);
    ctx->pc = 0x18FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEBCu;
            // 0x18fec0: 0x27a601ac  addiu       $a2, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F9A0u;
    if (runtime->hasFunction(0x18F9A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEC4u; }
        if (ctx->pc != 0x18FEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__11sndBankInfoFPcPi_0x18f9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEC4u; }
        if (ctx->pc != 0x18FEC4u) { return; }
    }
    ctx->pc = 0x18FEC4u;
label_18fec4:
    // 0x18fec4: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x18fec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fec8: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x18FEC8u;
    SET_GPR_U32(ctx, 31, 0x18FED0u);
    ctx->pc = 0x18FECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEC8u;
            // 0x18fecc: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FED0u; }
        if (ctx->pc != 0x18FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FED0u; }
        if (ctx->pc != 0x18FED0u) { return; }
    }
    ctx->pc = 0x18FED0u;
label_18fed0:
    // 0x18fed0: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x18fed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x18fed4: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x18fed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18fed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18fedc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FEDCu;
    {
        const bool branch_taken_0x18fedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18fedc) {
            ctx->pc = 0x18FEECu;
            goto label_18feec;
        }
    }
    ctx->pc = 0x18FEE4u;
    // 0x18fee4: 0x83a201ac  lb          $v0, 0x1AC($sp)
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x18fee8: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x18fee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_18feec:
    // 0x18feec: 0x0  nop
    ctx->pc = 0x18feecu;
    // NOP
    // 0x18fef0: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18fef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18fef8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FEF8u;
    {
        const bool branch_taken_0x18fef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18fef8) {
            ctx->pc = 0x18FF08u;
            goto label_18ff08;
        }
    }
    ctx->pc = 0x18FF00u;
    // 0x18ff00: 0x83a201ac  lb          $v0, 0x1AC($sp)
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x18ff04: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x18ff04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_18ff08:
    // 0x18ff08: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x18FF08u;
    SET_GPR_U32(ctx, 31, 0x18FF10u);
    ctx->pc = 0x18FF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF08u;
            // 0x18ff0c: 0x27a40198  addiu       $a0, $sp, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF10u; }
        if (ctx->pc != 0x18FF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF10u; }
        if (ctx->pc != 0x18FF10u) { return; }
    }
    ctx->pc = 0x18FF10u;
label_18ff10:
    // 0x18ff10: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x18ff10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ff14: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x18ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18ff18: 0x83a401a0  lb          $a0, 0x1A0($sp)
    ctx->pc = 0x18ff18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x18ff1c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x18ff1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18ff20: 0xa2240007  sb          $a0, 0x7($s1)
    ctx->pc = 0x18ff20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x18ff24: 0xa2230008  sb          $v1, 0x8($s1)
    ctx->pc = 0x18ff24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
label_18ff28:
    // 0x18ff28: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x18ff28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18ff2c: 0x1460ff5b  bnez        $v1, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x18FF2Cu;
    {
        const bool branch_taken_0x18ff2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ff2c) {
            ctx->pc = 0x18FC9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18fc9c;
        }
    }
    ctx->pc = 0x18FF34u;
label_18ff34:
    // 0x18ff34: 0x0  nop
    ctx->pc = 0x18ff34u;
    // NOP
label_18ff38:
    // 0x18ff38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18ff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18ff3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18ff3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ff40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ff40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ff44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ff44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ff48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ff48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ff4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ff4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ff50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ff50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ff54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ff54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ff58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ff58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff5c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF5Cu;
            // 0x18ff60: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FF64u;
}
