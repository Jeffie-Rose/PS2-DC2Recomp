#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_POS__FP12RS_STACKDATAi
// Address: 0x26b1e0 - 0x26b260
void ps2__GET_CHARA_POS__FP12RS_STACKDATAi_0x26b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_POS__FP12RS_STACKDATAi_0x26b1e0");
#endif

    switch (ctx->pc) {
        case 0x26b1e0u: goto label_26b1e0;
        case 0x26b1e4u: goto label_26b1e4;
        case 0x26b1e8u: goto label_26b1e8;
        case 0x26b1ecu: goto label_26b1ec;
        case 0x26b1f0u: goto label_26b1f0;
        case 0x26b1f4u: goto label_26b1f4;
        case 0x26b1f8u: goto label_26b1f8;
        case 0x26b1fcu: goto label_26b1fc;
        case 0x26b200u: goto label_26b200;
        case 0x26b204u: goto label_26b204;
        case 0x26b208u: goto label_26b208;
        case 0x26b20cu: goto label_26b20c;
        case 0x26b210u: goto label_26b210;
        case 0x26b214u: goto label_26b214;
        case 0x26b218u: goto label_26b218;
        case 0x26b21cu: goto label_26b21c;
        case 0x26b220u: goto label_26b220;
        case 0x26b224u: goto label_26b224;
        case 0x26b228u: goto label_26b228;
        case 0x26b22cu: goto label_26b22c;
        case 0x26b230u: goto label_26b230;
        case 0x26b234u: goto label_26b234;
        case 0x26b238u: goto label_26b238;
        case 0x26b23cu: goto label_26b23c;
        case 0x26b240u: goto label_26b240;
        case 0x26b244u: goto label_26b244;
        case 0x26b248u: goto label_26b248;
        case 0x26b24cu: goto label_26b24c;
        case 0x26b250u: goto label_26b250;
        case 0x26b254u: goto label_26b254;
        case 0x26b258u: goto label_26b258;
        case 0x26b25cu: goto label_26b25c;
        default: break;
    }

    ctx->pc = 0x26b1e0u;

label_26b1e0:
    // 0x26b1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26b1e4:
    // 0x26b1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26b1e8:
    // 0x26b1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26b1ec:
    // 0x26b1ec: 0xc097e18  jal         func_25F860
label_26b1f0:
    if (ctx->pc == 0x26B1F0u) {
        ctx->pc = 0x26B1F0u;
            // 0x26b1f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B1F4u;
        goto label_26b1f4;
    }
    ctx->pc = 0x26B1ECu;
    SET_GPR_U32(ctx, 31, 0x26B1F4u);
    ctx->pc = 0x26B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1ECu;
            // 0x26b1f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1F4u; }
        if (ctx->pc != 0x26B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1F4u; }
        if (ctx->pc != 0x26B1F4u) { return; }
    }
    ctx->pc = 0x26B1F4u;
label_26b1f4:
    // 0x26b1f4: 0xc09ac74  jal         func_26B1D0
label_26b1f8:
    if (ctx->pc == 0x26B1F8u) {
        ctx->pc = 0x26B1F8u;
            // 0x26b1f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B1FCu;
        goto label_26b1fc;
    }
    ctx->pc = 0x26B1F4u;
    SET_GPR_U32(ctx, 31, 0x26B1FCu);
    ctx->pc = 0x26B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1F4u;
            // 0x26b1f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1FCu; }
        if (ctx->pc != 0x26B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1FCu; }
        if (ctx->pc != 0x26B1FCu) { return; }
    }
    ctx->pc = 0x26B1FCu;
label_26b1fc:
    // 0x26b1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b200:
    if (ctx->pc == 0x26B200u) {
        ctx->pc = 0x26B204u;
        goto label_26b204;
    }
    ctx->pc = 0x26B1FCu;
    {
        const bool branch_taken_0x26b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b1fc) {
            ctx->pc = 0x26B20Cu;
            goto label_26b20c;
        }
    }
    ctx->pc = 0x26B204u;
label_26b204:
    // 0x26b204: 0x10000012  b           . + 4 + (0x12 << 2)
label_26b208:
    if (ctx->pc == 0x26B208u) {
        ctx->pc = 0x26B208u;
            // 0x26b208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B20Cu;
        goto label_26b20c;
    }
    ctx->pc = 0x26B204u;
    {
        const bool branch_taken_0x26b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B204u;
            // 0x26b208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b204) {
            ctx->pc = 0x26B250u;
            goto label_26b250;
        }
    }
    ctx->pc = 0x26B20Cu;
label_26b20c:
    // 0x26b20c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x26b20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b210:
    // 0x26b210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b214:
    // 0x26b214: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x26b214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_26b218:
    // 0x26b218: 0x320f809  jalr        $t9
label_26b21c:
    if (ctx->pc == 0x26B21Cu) {
        ctx->pc = 0x26B21Cu;
            // 0x26b21c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26B220u;
        goto label_26b220;
    }
    ctx->pc = 0x26B218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B220u);
        ctx->pc = 0x26B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B218u;
            // 0x26b21c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B220u; }
            if (ctx->pc != 0x26B220u) { return; }
        }
        }
    }
    ctx->pc = 0x26B220u;
label_26b220:
    // 0x26b220: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b224:
    // 0x26b224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b228:
    // 0x26b228: 0xc097e54  jal         func_25F950
label_26b22c:
    if (ctx->pc == 0x26B22Cu) {
        ctx->pc = 0x26B22Cu;
            // 0x26b22c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B230u;
        goto label_26b230;
    }
    ctx->pc = 0x26B228u;
    SET_GPR_U32(ctx, 31, 0x26B230u);
    ctx->pc = 0x26B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B228u;
            // 0x26b22c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B230u; }
        if (ctx->pc != 0x26B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B230u; }
        if (ctx->pc != 0x26B230u) { return; }
    }
    ctx->pc = 0x26B230u;
label_26b230:
    // 0x26b230: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b234:
    // 0x26b234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b238:
    // 0x26b238: 0xc097e54  jal         func_25F950
label_26b23c:
    if (ctx->pc == 0x26B23Cu) {
        ctx->pc = 0x26B23Cu;
            // 0x26b23c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B240u;
        goto label_26b240;
    }
    ctx->pc = 0x26B238u;
    SET_GPR_U32(ctx, 31, 0x26B240u);
    ctx->pc = 0x26B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B238u;
            // 0x26b23c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B240u; }
        if (ctx->pc != 0x26B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B240u; }
        if (ctx->pc != 0x26B240u) { return; }
    }
    ctx->pc = 0x26B240u;
label_26b240:
    // 0x26b240: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x26b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b244:
    // 0x26b244: 0xc097e54  jal         func_25F950
label_26b248:
    if (ctx->pc == 0x26B248u) {
        ctx->pc = 0x26B248u;
            // 0x26b248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B24Cu;
        goto label_26b24c;
    }
    ctx->pc = 0x26B244u;
    SET_GPR_U32(ctx, 31, 0x26B24Cu);
    ctx->pc = 0x26B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B244u;
            // 0x26b248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B24Cu; }
        if (ctx->pc != 0x26B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B24Cu; }
        if (ctx->pc != 0x26B24Cu) { return; }
    }
    ctx->pc = 0x26B24Cu;
label_26b24c:
    // 0x26b24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b250:
    // 0x26b250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26b254:
    // 0x26b254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26b258:
    // 0x26b258: 0x3e00008  jr          $ra
label_26b25c:
    if (ctx->pc == 0x26B25Cu) {
        ctx->pc = 0x26B25Cu;
            // 0x26b25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B260u;
        goto label_fallthrough_0x26b258;
    }
    ctx->pc = 0x26B258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B258u;
            // 0x26b25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b258:
    ctx->pc = 0x26B260u;
}
