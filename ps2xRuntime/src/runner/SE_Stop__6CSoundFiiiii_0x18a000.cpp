#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SE_Stop__6CSoundFiiiii
// Address: 0x18a000 - 0x18a0fc
void SE_Stop__6CSoundFiiiii_0x18a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SE_Stop__6CSoundFiiiii_0x18a000");
#endif

    switch (ctx->pc) {
        case 0x18a038u: goto label_18a038;
        case 0x18a08cu: goto label_18a08c;
        case 0x18a0a8u: goto label_18a0a8;
        case 0x18a0e0u: goto label_18a0e0;
        default: break;
    }

    ctx->pc = 0x18a000u;

    // 0x18a000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18a004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18a008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a00c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a010: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18a010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a018: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x18a018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a01c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x18a01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a020: 0x2a21007f  slti        $at, $s1, 0x7F
    ctx->pc = 0x18a020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x18a024: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A024u;
    {
        const bool branch_taken_0x18a024 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A024u;
            // 0x18a028: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a024) {
            ctx->pc = 0x18A040u;
            goto label_18a040;
        }
    }
    ctx->pc = 0x18A02Cu;
    // 0x18a02c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18a030: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18A030u;
    SET_GPR_U32(ctx, 31, 0x18A038u);
    ctx->pc = 0x18A034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A030u;
            // 0x18a034: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A038u; }
        if (ctx->pc != 0x18A038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A038u; }
        if (ctx->pc != 0x18A038u) { return; }
    }
    ctx->pc = 0x18A038u;
label_18a038:
    // 0x18a038: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18A038u;
    {
        const bool branch_taken_0x18a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A038u;
            // 0x18a03c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a038) {
            ctx->pc = 0x18A0E4u;
            goto label_18a0e4;
        }
    }
    ctx->pc = 0x18A040u;
label_18a040:
    // 0x18a040: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a044: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18a048: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a04c: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x18a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x18a050: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a054: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a058: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18a05c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a064: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x18A064u;
    {
        const bool branch_taken_0x18a064 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18a064) {
            ctx->pc = 0x18A0E0u;
            goto label_18a0e0;
        }
    }
    ctx->pc = 0x18A06Cu;
    // 0x18a06c: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x18a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x18a070: 0x24b0fff9  addiu       $s0, $a1, -0x7
    ctx->pc = 0x18a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x18a074: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18a074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a078: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18a078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18a07c: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x18a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x18a080: 0x344600b0  ori         $a2, $v0, 0xB0
    ctx->pc = 0x18a080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x18a084: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x18A084u;
    SET_GPR_U32(ctx, 31, 0x18A08Cu);
    ctx->pc = 0x18A088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A084u;
            // 0x18a088: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A08Cu; }
        if (ctx->pc != 0x18A08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A08Cu; }
        if (ctx->pc != 0x18A08Cu) { return; }
    }
    ctx->pc = 0x18A08Cu;
label_18a08c:
    // 0x18a08c: 0x3262007f  andi        $v0, $s3, 0x7F
    ctx->pc = 0x18a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)127);
    // 0x18a090: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18a090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18a094: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x18a094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18a098: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x18a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x18a09c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0a0: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x18A0A0u;
    SET_GPR_U32(ctx, 31, 0x18A0A8u);
    ctx->pc = 0x18A0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0A0u;
            // 0x18a0a4: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0A8u; }
        if (ctx->pc != 0x18A0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0A8u; }
        if (ctx->pc != 0x18A0A8u) { return; }
    }
    ctx->pc = 0x18A0A8u;
label_18a0a8:
    // 0x18a0a8: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x18a0ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18a0b0: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x18a0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a0b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18a0bc: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x18a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x18a0c0: 0xa3a20059  sb          $v0, 0x59($sp)
    ctx->pc = 0x18a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a0c4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x18a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18a0c8: 0xa3b2005b  sb          $s2, 0x5B($sp)
    ctx->pc = 0x18a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 91), (uint8_t)GPR_U32(ctx, 18));
    // 0x18a0cc: 0xa3b1005c  sb          $s1, 0x5C($sp)
    ctx->pc = 0x18a0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 17));
    // 0x18a0d0: 0xa3a0005a  sb          $zero, 0x5A($sp)
    ctx->pc = 0x18a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a0d4: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x18a0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a0d8: 0xc048f98  jal         func_123E60
    ctx->pc = 0x18A0D8u;
    SET_GPR_U32(ctx, 31, 0x18A0E0u);
    ctx->pc = 0x18A0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0D8u;
            // 0x18a0dc: 0xa3a0005e  sb          $zero, 0x5E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0E0u; }
        if (ctx->pc != 0x18A0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0E0u; }
        if (ctx->pc != 0x18A0E0u) { return; }
    }
    ctx->pc = 0x18A0E0u;
label_18a0e0:
    // 0x18a0e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18a0e4:
    // 0x18a0e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a0e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a0e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a0ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0F4u;
            // 0x18a0f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A0FCu;
}
