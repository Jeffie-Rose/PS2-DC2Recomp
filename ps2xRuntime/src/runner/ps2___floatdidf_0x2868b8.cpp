#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __floatdidf
// Address: 0x2868b8 - 0x286950
void ps2___floatdidf_0x2868b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___floatdidf_0x2868b8");
#endif

    switch (ctx->pc) {
        case 0x2868e0u: goto label_2868e0;
        case 0x2868ecu: goto label_2868ec;
        case 0x2868f8u: goto label_2868f8;
        case 0x286918u: goto label_286918;
        case 0x286930u: goto label_286930;
        case 0x28693cu: goto label_28693c;
        default: break;
    }

    ctx->pc = 0x2868b8u;

    // 0x2868b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2868bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2868bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2868c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2868c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2868c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2868c8: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x2868c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x2868cc: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x2868ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x2868d0: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x2868d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2868d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2868d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2868d8: 0xc0a215c  jal         func_288570
    ctx->pc = 0x2868D8u;
    SET_GPR_U32(ctx, 31, 0x2868E0u);
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868E0u; }
        if (ctx->pc != 0x2868E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868E0u; }
        if (ctx->pc != 0x2868E0u) { return; }
    }
    ctx->pc = 0x2868E0u;
label_2868e0:
    // 0x2868e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2868e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868e4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2868E4u;
    SET_GPR_U32(ctx, 31, 0x2868ECu);
    ctx->pc = 0x2868E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2868E4u;
            // 0x2868e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868ECu; }
        if (ctx->pc != 0x2868ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868ECu; }
        if (ctx->pc != 0x2868ECu) { return; }
    }
    ctx->pc = 0x2868ECu;
label_2868ec:
    // 0x2868ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2868ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868f0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2868F0u;
    SET_GPR_U32(ctx, 31, 0x2868F8u);
    ctx->pc = 0x2868F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2868F0u;
            // 0x2868f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868F8u; }
        if (ctx->pc != 0x2868F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868F8u; }
        if (ctx->pc != 0x2868F8u) { return; }
    }
    ctx->pc = 0x2868F8u;
label_2868f8:
    // 0x2868f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2868f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2868fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286900: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286904: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x286904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x286908: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x286908u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28690c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x28690cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x286910: 0xc0a215c  jal         func_288570
    ctx->pc = 0x286910u;
    SET_GPR_U32(ctx, 31, 0x286918u);
    ctx->pc = 0x286914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286910u;
            // 0x286914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286918u; }
        if (ctx->pc != 0x286918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286918u; }
        if (ctx->pc != 0x286918u) { return; }
    }
    ctx->pc = 0x286918u;
label_286918:
    // 0x286918: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286918u;
    {
        const bool branch_taken_0x286918 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28691Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286918u;
            // 0x28691c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286918) {
            ctx->pc = 0x286934u;
            goto label_286934;
        }
    }
    ctx->pc = 0x286920u;
    // 0x286920: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x286920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x286924: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x286924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x286928: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x286928u;
    SET_GPR_U32(ctx, 31, 0x286930u);
    ctx->pc = 0x28692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286928u;
            // 0x28692c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286930u; }
        if (ctx->pc != 0x286930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286930u; }
        if (ctx->pc != 0x286930u) { return; }
    }
    ctx->pc = 0x286930u;
label_286930:
    // 0x286930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286934:
    // 0x286934: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x286934u;
    SET_GPR_U32(ctx, 31, 0x28693Cu);
    ctx->pc = 0x286938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286934u;
            // 0x286938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28693Cu; }
        if (ctx->pc != 0x28693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28693Cu; }
        if (ctx->pc != 0x28693Cu) { return; }
    }
    ctx->pc = 0x28693Cu;
label_28693c:
    // 0x28693c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28693cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286940: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286948: 0x3e00008  jr          $ra
    ctx->pc = 0x286948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286948u;
            // 0x28694c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286950u;
}
