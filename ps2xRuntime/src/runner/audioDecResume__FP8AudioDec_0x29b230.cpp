#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecResume__FP8AudioDec
// Address: 0x29b230 - 0x29b298
void audioDecResume__FP8AudioDec_0x29b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecResume__FP8AudioDec_0x29b230");
#endif

    switch (ctx->pc) {
        case 0x29b248u: goto label_29b248;
        case 0x29b280u: goto label_29b280;
        default: break;
    }

    ctx->pc = 0x29b230u;

    // 0x29b230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b240: 0xc0a6df4  jal         func_29B7D0
    ctx->pc = 0x29B240u;
    SET_GPR_U32(ctx, 31, 0x29B248u);
    ctx->pc = 0x29B244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B240u;
            // 0x29b244: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B7D0u;
    if (runtime->hasFunction(0x29B7D0u)) {
        auto targetFn = runtime->lookupFunction(0x29B7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B248u; }
        if (ctx->pc != 0x29B248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeInputVolume__FUi_0x29b7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B248u; }
        if (ctx->pc != 0x29B248u) { return; }
    }
    ctx->pc = 0x29B248u;
label_29b248:
    // 0x29b248: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x29b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x29b24c: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x29b24cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x29b250: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B250u;
    {
        const bool branch_taken_0x29b250 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29B254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B250u;
            // 0x29b254: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b250) {
            ctx->pc = 0x29B260u;
            goto label_29b260;
        }
    }
    ctx->pc = 0x29B258u;
    // 0x29b258: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x29b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x29b25c: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x29b25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_29b260:
    // 0x29b260: 0x24a80  sll         $t1, $v0, 10
    ctx->pc = 0x29b260u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x29b264: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b268: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x29b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x29b26c: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x29b26cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x29b270: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29b270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b274: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x29b274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x29b278: 0xc046454  jal         func_119150
    ctx->pc = 0x29B278u;
    SET_GPR_U32(ctx, 31, 0x29B280u);
    ctx->pc = 0x29B27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B278u;
            // 0x29b27c: 0x1025021  addu        $t2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B280u; }
        if (ctx->pc != 0x29B280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B280u; }
        if (ctx->pc != 0x29B280u) { return; }
    }
    ctx->pc = 0x29B280u;
label_29b280:
    // 0x29b280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29b280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b284: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29b284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29b288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b290: 0x3e00008  jr          $ra
    ctx->pc = 0x29B290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B290u;
            // 0x29b294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B298u;
}
