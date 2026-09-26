#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaSoundEnter__FP6CSceneP12CActionCharai
// Address: 0x2ba020 - 0x2ba0e0
void MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020");
#endif

    switch (ctx->pc) {
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0ccu: goto label_2ba0cc;
        default: break;
    }

    ctx->pc = 0x2ba020u;

    // 0x2ba020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ba024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ba028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba034: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BA034u;
    {
        const bool branch_taken_0x2ba034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA034u;
            // 0x2ba038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba034) {
            ctx->pc = 0x2BA0CCu;
            goto label_2ba0cc;
        }
    }
    ctx->pc = 0x2BA03Cu;
    // 0x2ba03c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BA03Cu;
    {
        const bool branch_taken_0x2ba03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA03Cu;
            // 0x2ba040: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba03c) {
            ctx->pc = 0x2BA0CCu;
            goto label_2ba0cc;
        }
    }
    ctx->pc = 0x2BA044u;
    // 0x2ba044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ba044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ba048: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2ba048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2ba04c: 0x8c23a498  lw          $v1, -0x5B68($at)
    ctx->pc = 0x2ba04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
    // 0x2ba050: 0xae03057c  sw          $v1, 0x57C($s0)
    ctx->pc = 0x2ba050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 3));
    // 0x2ba054: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA054u;
    {
        const bool branch_taken_0x2ba054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA054u;
            // 0x2ba058: 0xae020580  sw          $v0, 0x580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba054) {
            ctx->pc = 0x2BA064u;
            goto label_2ba064;
        }
    }
    ctx->pc = 0x2BA05Cu;
    // 0x2ba05c: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2BA05Cu;
    SET_GPR_U32(ctx, 31, 0x2BA064u);
    ctx->pc = 0x2BA060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA05Cu;
            // 0x2ba060: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA064u; }
        if (ctx->pc != 0x2BA064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA064u; }
        if (ctx->pc != 0x2BA064u) { return; }
    }
    ctx->pc = 0x2BA064u;
label_2ba064:
    // 0x2ba064: 0x8f859bdc  lw          $a1, -0x6424($gp)
    ctx->pc = 0x2ba064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941660)));
    // 0x2ba068: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BA068u;
    {
        const bool branch_taken_0x2ba068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA068u;
            // 0x2ba06c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba068) {
            ctx->pc = 0x2BA0B8u;
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA070u;
    // 0x2ba070: 0xc78084dc  lwc1        $f0, -0x7B24($gp)
    ctx->pc = 0x2ba070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba074: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x2ba074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2ba078: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ba078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ba07c: 0x8f828488  lw          $v0, -0x7B78($gp)
    ctx->pc = 0x2ba07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x2ba080: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA080u;
    {
        const bool branch_taken_0x2ba080 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA080u;
            // 0x2ba084: 0x5d1821  addu        $v1, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba080) {
            ctx->pc = 0x2BA090u;
            goto label_2ba090;
        }
    }
    ctx->pc = 0x2BA088u;
    // 0x2ba088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba08c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ba08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2ba090:
    // 0x2ba090: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ba090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ba094: 0x8066003c  lb          $a2, 0x3C($v1)
    ctx->pc = 0x2ba094u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2ba098: 0x8f829b6c  lw          $v0, -0x6494($gp)
    ctx->pc = 0x2ba098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
    // 0x2ba09c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2ba09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ba0a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ba0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ba0a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ba0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ba0a8: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2BA0A8u;
    SET_GPR_U32(ctx, 31, 0x2BA0B0u);
    ctx->pc = 0x2BA0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0A8u;
            // 0x2ba0ac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0B0u; }
        if (ctx->pc != 0x2BA0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0B0u; }
        if (ctx->pc != 0x2BA0B0u) { return; }
    }
    ctx->pc = 0x2BA0B0u;
label_2ba0b0:
    // 0x2ba0b0: 0xae020588  sw          $v0, 0x588($s0)
    ctx->pc = 0x2ba0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 2));
    // 0x2ba0b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ba0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2ba0b8:
    // 0x2ba0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0bc: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2ba0c0: 0x8c22c4d0  lw          $v0, -0x3B30($at)
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x2ba0c4: 0xc05aa9c  jal         func_16AA70
    ctx->pc = 0x2BA0C4u;
    SET_GPR_U32(ctx, 31, 0x2BA0CCu);
    ctx->pc = 0x2BA0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0C4u;
            // 0x2ba0c8: 0xae02058c  sw          $v0, 0x58C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AA70u;
    if (runtime->hasFunction(0x16AA70u)) {
        auto targetFn = runtime->lookupFunction(0x16AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0CCu; }
        if (ctx->pc != 0x2BA0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSoundInfoCopy__12CActionCharaFv_0x16aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0CCu; }
        if (ctx->pc != 0x2BA0CCu) { return; }
    }
    ctx->pc = 0x2BA0CCu;
label_2ba0cc:
    // 0x2ba0cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0D8u;
            // 0x2ba0dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA0E0u;
}
