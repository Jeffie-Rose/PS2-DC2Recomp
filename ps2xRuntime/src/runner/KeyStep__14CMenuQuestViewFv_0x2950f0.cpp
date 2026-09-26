#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__14CMenuQuestViewFv
// Address: 0x2950f0 - 0x2957ec
void KeyStep__14CMenuQuestViewFv_0x2950f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__14CMenuQuestViewFv_0x2950f0");
#endif

    switch (ctx->pc) {
        case 0x295118u: goto label_295118;
        case 0x295120u: goto label_295120;
        case 0x29512cu: goto label_29512c;
        case 0x295164u: goto label_295164;
        case 0x295190u: goto label_295190;
        case 0x2951a8u: goto label_2951a8;
        case 0x2951b0u: goto label_2951b0;
        case 0x295208u: goto label_295208;
        case 0x295220u: goto label_295220;
        case 0x295240u: goto label_295240;
        case 0x29525cu: goto label_29525c;
        case 0x2952a4u: goto label_2952a4;
        case 0x295308u: goto label_295308;
        case 0x295318u: goto label_295318;
        case 0x295340u: goto label_295340;
        case 0x295354u: goto label_295354;
        case 0x295360u: goto label_295360;
        case 0x295394u: goto label_295394;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953e4u: goto label_2953e4;
        case 0x2953f8u: goto label_2953f8;
        case 0x295404u: goto label_295404;
        case 0x295424u: goto label_295424;
        case 0x295430u: goto label_295430;
        case 0x29546cu: goto label_29546c;
        case 0x2954b0u: goto label_2954b0;
        case 0x2954ccu: goto label_2954cc;
        case 0x2954e4u: goto label_2954e4;
        case 0x295500u: goto label_295500;
        case 0x29552cu: goto label_29552c;
        case 0x29553cu: goto label_29553c;
        case 0x295548u: goto label_295548;
        case 0x29555cu: goto label_29555c;
        case 0x295568u: goto label_295568;
        case 0x295580u: goto label_295580;
        case 0x2955c0u: goto label_2955c0;
        case 0x2955dcu: goto label_2955dc;
        case 0x2955e8u: goto label_2955e8;
        case 0x295608u: goto label_295608;
        case 0x295610u: goto label_295610;
        case 0x29563cu: goto label_29563c;
        case 0x295648u: goto label_295648;
        default: break;
    }

    ctx->pc = 0x2950f0u;

    // 0x2950f0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2950f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2950f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2950f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2950f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2950f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2950fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2950fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x295100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29510c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29510cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295110: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x295110u;
    SET_GPR_U32(ctx, 31, 0x295118u);
    ctx->pc = 0x295114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295110u;
            // 0x295114: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295118u; }
        if (ctx->pc != 0x295118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295118u; }
        if (ctx->pc != 0x295118u) { return; }
    }
    ctx->pc = 0x295118u;
label_295118:
    // 0x295118: 0xc08f840  jal         func_23E100
    ctx->pc = 0x295118u;
    SET_GPR_U32(ctx, 31, 0x295120u);
    ctx->pc = 0x29511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295118u;
            // 0x29511c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295120u; }
        if (ctx->pc != 0x295120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295120u; }
        if (ctx->pc != 0x295120u) { return; }
    }
    ctx->pc = 0x295120u;
label_295120:
    // 0x295120: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x295120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x295124: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x295124u;
    SET_GPR_U32(ctx, 31, 0x29512Cu);
    ctx->pc = 0x295128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295124u;
            // 0x295128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29512Cu; }
        if (ctx->pc != 0x29512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29512Cu; }
        if (ctx->pc != 0x29512Cu) { return; }
    }
    ctx->pc = 0x29512Cu;
label_29512c:
    // 0x29512c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x29512cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x295130: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x295130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295134: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x295134u;
    {
        const bool branch_taken_0x295134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295134u;
            // 0x295138: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295134) {
            ctx->pc = 0x2951B8u;
            goto label_2951b8;
        }
    }
    ctx->pc = 0x29513Cu;
    // 0x29513c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295140: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x295140u;
    {
        const bool branch_taken_0x295140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x295144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295140u;
            // 0x295144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295140) {
            ctx->pc = 0x295188u;
            goto label_295188;
        }
    }
    ctx->pc = 0x295148u;
    // 0x295148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29514c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29514Cu;
    {
        const bool branch_taken_0x29514c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x295150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29514Cu;
            // 0x295150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29514c) {
            ctx->pc = 0x29515Cu;
            goto label_29515c;
        }
    }
    ctx->pc = 0x295154u;
    // 0x295154: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x295154u;
    {
        const bool branch_taken_0x295154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295154u;
            // 0x295158: 0xc78298a8  lwc1        $f2, -0x6758($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295154) {
            ctx->pc = 0x29564Cu;
            goto label_29564c;
        }
    }
    ctx->pc = 0x29515Cu;
label_29515c:
    // 0x29515c: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x29515Cu;
    SET_GPR_U32(ctx, 31, 0x295164u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295164u; }
        if (ctx->pc != 0x295164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295164u; }
        if (ctx->pc != 0x295164u) { return; }
    }
    ctx->pc = 0x295164u;
label_295164:
    // 0x295164: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x295164u;
    {
        const bool branch_taken_0x295164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295164) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x29516Cu;
    // 0x29516c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x29516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x295170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x295170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295174: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x295178: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x295178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29517c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x29517cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x295180: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x295180u;
    {
        const bool branch_taken_0x295180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295180u;
            // 0x295184: 0xaf828444  sw          $v0, -0x7BBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295180) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295188u;
label_295188:
    // 0x295188: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x295188u;
    SET_GPR_U32(ctx, 31, 0x295190u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295190u; }
        if (ctx->pc != 0x295190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295190u; }
        if (ctx->pc != 0x295190u) { return; }
    }
    ctx->pc = 0x295190u;
label_295190:
    // 0x295190: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x295190u;
    {
        const bool branch_taken_0x295190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295190) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295198u;
    // 0x295198: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x295198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29519c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951a0: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2951A0u;
    SET_GPR_U32(ctx, 31, 0x2951A8u);
    ctx->pc = 0x2951A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2951A0u;
            // 0x2951a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951A8u; }
        if (ctx->pc != 0x2951A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951A8u; }
        if (ctx->pc != 0x2951A8u) { return; }
    }
    ctx->pc = 0x2951A8u;
label_2951a8:
    // 0x2951a8: 0xc08dc80  jal         func_237200
    ctx->pc = 0x2951A8u;
    SET_GPR_U32(ctx, 31, 0x2951B0u);
    ctx->pc = 0x2951ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2951A8u;
            // 0x2951ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237200u;
    if (runtime->hasFunction(0x237200u)) {
        auto targetFn = runtime->lookupFunction(0x237200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951B0u; }
        if (ctx->pc != 0x2951B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexBlock__14CBaseMenuClassFv_0x237200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951B0u; }
        if (ctx->pc != 0x2951B0u) { return; }
    }
    ctx->pc = 0x2951B0u;
label_2951b0:
    // 0x2951b0: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x2951B0u;
    {
        const bool branch_taken_0x2951b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951B0u;
            // 0x2951b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951b0) {
            ctx->pc = 0x2957CCu;
            goto label_2957cc;
        }
    }
    ctx->pc = 0x2951B8u;
label_2951b8:
    // 0x2951b8: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2951b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2951bc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2951BCu;
    {
        const bool branch_taken_0x2951bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951BCu;
            // 0x2951c0: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951bc) {
            ctx->pc = 0x2952E0u;
            goto label_2952e0;
        }
    }
    ctx->pc = 0x2951C4u;
    // 0x2951c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2951C4u;
    {
        const bool branch_taken_0x2951c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951C4u;
            // 0x2951c8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951c4) {
            ctx->pc = 0x2951DCu;
            goto label_2951dc;
        }
    }
    ctx->pc = 0x2951CCu;
    // 0x2951cc: 0x8f8298d8  lw          $v0, -0x6728($gp)
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x2951d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2951d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2951d4: 0xaf8298d8  sw          $v0, -0x6728($gp)
    ctx->pc = 0x2951d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 2));
    // 0x2951d8: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2951d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_2951dc:
    // 0x2951dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2951DCu;
    {
        const bool branch_taken_0x2951dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2951dc) {
            ctx->pc = 0x2951F0u;
            goto label_2951f0;
        }
    }
    ctx->pc = 0x2951E4u;
    // 0x2951e4: 0x8f8298d8  lw          $v0, -0x6728($gp)
    ctx->pc = 0x2951e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x2951e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2951e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2951ec: 0xaf8298d8  sw          $v0, -0x6728($gp)
    ctx->pc = 0x2951ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 2));
label_2951f0:
    // 0x2951f0: 0x8f8298d8  lw          $v0, -0x6728($gp)
    ctx->pc = 0x2951f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x2951f4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2951F4u;
    {
        const bool branch_taken_0x2951f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2951F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951F4u;
            // 0x2951f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951f4) {
            ctx->pc = 0x295200u;
            goto label_295200;
        }
    }
    ctx->pc = 0x2951FCu;
    // 0x2951fc: 0xaf8098d8  sw          $zero, -0x6728($gp)
    ctx->pc = 0x2951fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 0));
label_295200:
    // 0x295200: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295200u;
    SET_GPR_U32(ctx, 31, 0x295208u);
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295208u; }
        if (ctx->pc != 0x295208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295208u; }
        if (ctx->pc != 0x295208u) { return; }
    }
    ctx->pc = 0x295208u;
label_295208:
    // 0x295208: 0x8f8398d8  lw          $v1, -0x6728($gp)
    ctx->pc = 0x295208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x29520c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x29520cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295210: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x295210u;
    {
        const bool branch_taken_0x295210 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x295214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295210u;
            // 0x295214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295210) {
            ctx->pc = 0x295228u;
            goto label_295228;
        }
    }
    ctx->pc = 0x295218u;
    // 0x295218: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295218u;
    SET_GPR_U32(ctx, 31, 0x295220u);
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295220u; }
        if (ctx->pc != 0x295220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295220u; }
        if (ctx->pc != 0x295220u) { return; }
    }
    ctx->pc = 0x295220u;
label_295220:
    // 0x295220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295224: 0xaf8298d8  sw          $v0, -0x6728($gp)
    ctx->pc = 0x295224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 2));
label_295228:
    // 0x295228: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x295228u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x29522c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295230: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x295230u;
    {
        const bool branch_taken_0x295230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295230) {
            ctx->pc = 0x29528Cu;
            goto label_29528c;
        }
    }
    ctx->pc = 0x295238u;
    // 0x295238: 0xc07fcb0  jal         func_1FF2C0
    ctx->pc = 0x295238u;
    SET_GPR_U32(ctx, 31, 0x295240u);
    ctx->pc = 0x29523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295238u;
            // 0x29523c: 0x8f8498d8  lw          $a0, -0x6728($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2C0u;
    if (runtime->hasFunction(0x1FF2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295240u; }
        if (ctx->pc != 0x295240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTableIndex__Fi_0x1ff2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295240u; }
        if (ctx->pc != 0x295240u) { return; }
    }
    ctx->pc = 0x295240u;
label_295240:
    // 0x295240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295240u;
    {
        const bool branch_taken_0x295240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295240) {
            ctx->pc = 0x295250u;
            goto label_295250;
        }
    }
    ctx->pc = 0x295248u;
    // 0x295248: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x295248u;
    {
        const bool branch_taken_0x295248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295248u;
            // 0x29524c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295248) {
            ctx->pc = 0x2957CCu;
            goto label_2957cc;
        }
    }
    ctx->pc = 0x295250u;
label_295250:
    // 0x295250: 0x8f8498d0  lw          $a0, -0x6730($gp)
    ctx->pc = 0x295250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
    // 0x295254: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x295254u;
    SET_GPR_U32(ctx, 31, 0x29525Cu);
    ctx->pc = 0x295258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295254u;
            // 0x295258: 0x84450000  lh          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29525Cu; }
        if (ctx->pc != 0x29525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29525Cu; }
        if (ctx->pc != 0x29525Cu) { return; }
    }
    ctx->pc = 0x29525Cu;
label_29525c:
    // 0x29525c: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x29525cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x295260: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x295260u;
    {
        const bool branch_taken_0x295260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295260u;
            // 0x295264: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295260) {
            ctx->pc = 0x295278u;
            goto label_295278;
        }
    }
    ctx->pc = 0x295268u;
    // 0x295268: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x295268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29526c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x295270: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x295270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x295274: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x295274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_295278:
    // 0x295278: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x295278u;
    {
        const bool branch_taken_0x295278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295278) {
            ctx->pc = 0x29528Cu;
            goto label_29528c;
        }
    }
    ctx->pc = 0x295280u;
    // 0x295280: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x295280u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x295284: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x295284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x295288: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x295288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_29528c:
    // 0x29528c: 0x838298dc  lb          $v0, -0x6724($gp)
    ctx->pc = 0x29528cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x295290: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x295290u;
    {
        const bool branch_taken_0x295290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295290u;
            // 0x295294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295290) {
            ctx->pc = 0x2952D8u;
            goto label_2952d8;
        }
    }
    ctx->pc = 0x295298u;
    // 0x295298: 0x8f8598d8  lw          $a1, -0x6728($gp)
    ctx->pc = 0x295298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x29529c: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x29529Cu;
    SET_GPR_U32(ctx, 31, 0x2952A4u);
    ctx->pc = 0x2952A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29529Cu;
            // 0x2952a0: 0x8f849898  lw          $a0, -0x6768($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940824)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AAB0u;
    if (runtime->hasFunction(0x31AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x31AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2952A4u; }
        if (ctx->pc != 0x2952A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayQuestData__10CQuestDataFi_0x31aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2952A4u; }
        if (ctx->pc != 0x2952A4u) { return; }
    }
    ctx->pc = 0x2952A4u;
label_2952a4:
    // 0x2952a4: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2952a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2952a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2952A8u;
    {
        const bool branch_taken_0x2952a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952A8u;
            // 0x2952ac: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952a8) {
            ctx->pc = 0x2952C0u;
            goto label_2952c0;
        }
    }
    ctx->pc = 0x2952B0u;
    // 0x2952b0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2952b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2952b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2952b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2952b8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2952b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2952bc: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x2952bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_2952c0:
    // 0x2952c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2952C0u;
    {
        const bool branch_taken_0x2952c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952c0) {
            ctx->pc = 0x2952D4u;
            goto label_2952d4;
        }
    }
    ctx->pc = 0x2952C8u;
    // 0x2952c8: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x2952c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2952cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2952ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2952d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2952d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2952d4:
    // 0x2952d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2952d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2952d8:
    // 0x2952d8: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x2952D8u;
    {
        const bool branch_taken_0x2952d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952D8u;
            // 0x2952dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952d8) {
            ctx->pc = 0x2957D0u;
            goto label_2957d0;
        }
    }
    ctx->pc = 0x2952E0u;
label_2952e0:
    // 0x2952e0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2952e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2952e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2952e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2952e8: 0x106200cc  beq         $v1, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2952E8u;
    {
        const bool branch_taken_0x2952e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2952e8) {
            ctx->pc = 0x29561Cu;
            goto label_29561c;
        }
    }
    ctx->pc = 0x2952F0u;
    // 0x2952f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2952F0u;
    {
        const bool branch_taken_0x2952f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952F0u;
            // 0x2952f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952f0) {
            ctx->pc = 0x295300u;
            goto label_295300;
        }
    }
    ctx->pc = 0x2952F8u;
    // 0x2952f8: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2952F8u;
    {
        const bool branch_taken_0x2952f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952f8) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295300u;
label_295300:
    // 0x295300: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295300u;
    SET_GPR_U32(ctx, 31, 0x295308u);
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295308u; }
        if (ctx->pc != 0x295308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295308u; }
        if (ctx->pc != 0x295308u) { return; }
    }
    ctx->pc = 0x295308u;
label_295308:
    // 0x295308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29530c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295310: 0xc08edcc  jal         func_23B730
    ctx->pc = 0x295310u;
    SET_GPR_U32(ctx, 31, 0x295318u);
    ctx->pc = 0x295314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295310u;
            // 0x295314: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B730u;
    if (runtime->hasFunction(0x23B730u)) {
        auto targetFn = runtime->lookupFunction(0x23B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295318u; }
        if (ctx->pc != 0x295318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListSelectKeyCheck__Fii_0x23b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295318u; }
        if (ctx->pc != 0x295318u) { return; }
    }
    ctx->pc = 0x295318u;
label_295318:
    // 0x295318: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x295318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29531c: 0x8e140114  lw          $s4, 0x114($s0)
    ctx->pc = 0x29531cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x295320: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x295320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x295324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295328: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x295328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x29532c: 0x26060114  addiu       $a2, $s0, 0x114
    ctx->pc = 0x29532cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x295330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295334: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x295334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295338: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x295338u;
    SET_GPR_U32(ctx, 31, 0x295340u);
    ctx->pc = 0x29533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295338u;
            // 0x29533c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295340u; }
        if (ctx->pc != 0x295340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295340u; }
        if (ctx->pc != 0x295340u) { return; }
    }
    ctx->pc = 0x295340u;
label_295340:
    // 0x295340: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x295340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x295344: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x295344u;
    {
        const bool branch_taken_0x295344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x295348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295344u;
            // 0x295348: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295344) {
            ctx->pc = 0x295374u;
            goto label_295374;
        }
    }
    ctx->pc = 0x29534Cu;
    // 0x29534c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x29534Cu;
    SET_GPR_U32(ctx, 31, 0x295354u);
    ctx->pc = 0x295350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29534Cu;
            // 0x295350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295354u; }
        if (ctx->pc != 0x295354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295354u; }
        if (ctx->pc != 0x295354u) { return; }
    }
    ctx->pc = 0x295354u;
label_295354:
    // 0x295354: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x295354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x295358: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x295358u;
    SET_GPR_U32(ctx, 31, 0x295360u);
    ctx->pc = 0x29535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295358u;
            // 0x29535c: 0x2822023  subu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295360u; }
        if (ctx->pc != 0x295360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295360u; }
        if (ctx->pc != 0x295360u) { return; }
    }
    ctx->pc = 0x295360u;
label_295360:
    // 0x295360: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x295360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x295364: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x295364u;
    {
        const bool branch_taken_0x295364 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x295364) {
            ctx->pc = 0x295370u;
            goto label_295370;
        }
    }
    ctx->pc = 0x29536Cu;
    // 0x29536c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29536cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295370:
    // 0x295370: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x295370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_295374:
    // 0x295374: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x295374u;
    {
        const bool branch_taken_0x295374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295374u;
            // 0x295378: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295374) {
            ctx->pc = 0x2955F0u;
            goto label_2955f0;
        }
    }
    ctx->pc = 0x29537Cu;
    // 0x29537c: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x29537cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x295380: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x295380u;
    {
        const bool branch_taken_0x295380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295380u;
            // 0x295384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295380) {
            ctx->pc = 0x2954D4u;
            goto label_2954d4;
        }
    }
    ctx->pc = 0x295388u;
    // 0x295388: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x295388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x29538c: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x29538Cu;
    SET_GPR_U32(ctx, 31, 0x295394u);
    ctx->pc = 0x295390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29538Cu;
            // 0x295390: 0x8f849898  lw          $a0, -0x6768($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940824)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AAB0u;
    if (runtime->hasFunction(0x31AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x31AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295394u; }
        if (ctx->pc != 0x295394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayQuestData__10CQuestDataFi_0x31aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295394u; }
        if (ctx->pc != 0x295394u) { return; }
    }
    ctx->pc = 0x295394u;
label_295394:
    // 0x295394: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x295394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295398: 0x122000ab  beqz        $s1, . + 4 + (0xAB << 2)
    ctx->pc = 0x295398u;
    {
        const bool branch_taken_0x295398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x295398) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x2953A0u;
    // 0x2953a0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2953a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2953a4: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2953A4u;
    {
        const bool branch_taken_0x2953a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2953A4u;
            // 0x2953a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953a4) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x2953ACu;
    // 0x2953ac: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2953acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2953b0: 0xa38298c8  sb          $v0, -0x6738($gp)
    ctx->pc = 0x2953b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940872), (uint8_t)GPR_U32(ctx, 2));
    // 0x2953b4: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2953b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2953b8: 0xc0c6a00  jal         func_31A800
    ctx->pc = 0x2953B8u;
    SET_GPR_U32(ctx, 31, 0x2953C0u);
    ctx->pc = 0x2953BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953B8u;
            // 0x2953bc: 0x8f849894  lw          $a0, -0x676C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A800u;
    if (runtime->hasFunction(0x31A800u)) {
        auto targetFn = runtime->lookupFunction(0x31A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953C0u; }
        if (ctx->pc != 0x2953C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestInfo__13CQuestManagerFi_0x31a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953C0u; }
        if (ctx->pc != 0x2953C0u) { return; }
    }
    ctx->pc = 0x2953C0u;
label_2953c0:
    // 0x2953c0: 0xaf8298a4  sw          $v0, -0x675C($gp)
    ctx->pc = 0x2953c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940836), GPR_U32(ctx, 2));
    // 0x2953c4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2953c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2953c8: 0x8f8298a4  lw          $v0, -0x675C($gp)
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940836)));
    // 0x2953cc: 0x8c245320  lw          $a0, 0x5320($at)
    ctx->pc = 0x2953ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21280)));
    // 0x2953d0: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x2953D0u;
    SET_GPR_U32(ctx, 31, 0x2953D8u);
    ctx->pc = 0x2953D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953D0u;
            // 0x2953d4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953D8u; }
        if (ctx->pc != 0x2953D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953D8u; }
        if (ctx->pc != 0x2953D8u) { return; }
    }
    ctx->pc = 0x2953D8u;
label_2953d8:
    // 0x2953d8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2953d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2953dc: 0xc087898  jal         func_21E260
    ctx->pc = 0x2953DCu;
    SET_GPR_U32(ctx, 31, 0x2953E4u);
    ctx->pc = 0x2953E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953DCu;
            // 0x2953e0: 0x8c245320  lw          $a0, 0x5320($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953E4u; }
        if (ctx->pc != 0x2953E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953E4u; }
        if (ctx->pc != 0x2953E4u) { return; }
    }
    ctx->pc = 0x2953E4u;
label_2953e4:
    // 0x2953e4: 0x8f8298a4  lw          $v0, -0x675C($gp)
    ctx->pc = 0x2953e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940836)));
    // 0x2953e8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2953e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2953ec: 0x8c245324  lw          $a0, 0x5324($at)
    ctx->pc = 0x2953ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
    // 0x2953f0: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x2953F0u;
    SET_GPR_U32(ctx, 31, 0x2953F8u);
    ctx->pc = 0x2953F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953F0u;
            // 0x2953f4: 0x24450088  addiu       $a1, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953F8u; }
        if (ctx->pc != 0x2953F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953F8u; }
        if (ctx->pc != 0x2953F8u) { return; }
    }
    ctx->pc = 0x2953F8u;
label_2953f8:
    // 0x2953f8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2953f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2953fc: 0xc087898  jal         func_21E260
    ctx->pc = 0x2953FCu;
    SET_GPR_U32(ctx, 31, 0x295404u);
    ctx->pc = 0x295400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953FCu;
            // 0x295400: 0x8c245324  lw          $a0, 0x5324($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295404u; }
        if (ctx->pc != 0x295404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295404u; }
        if (ctx->pc != 0x295404u) { return; }
    }
    ctx->pc = 0x295404u;
label_295404:
    // 0x295404: 0x8f8398a4  lw          $v1, -0x675C($gp)
    ctx->pc = 0x295404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940836)));
    // 0x295408: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x295408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x29540c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29540Cu;
    {
        const bool branch_taken_0x29540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29540Cu;
            // 0x295410: 0x2465018a  addiu       $a1, $v1, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 394));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29540c) {
            ctx->pc = 0x295418u;
            goto label_295418;
        }
    }
    ctx->pc = 0x295414u;
    // 0x295414: 0x2465020c  addiu       $a1, $v1, 0x20C
    ctx->pc = 0x295414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 524));
label_295418:
    // 0x295418: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x295418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29541c: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x29541Cu;
    SET_GPR_U32(ctx, 31, 0x295424u);
    ctx->pc = 0x295420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29541Cu;
            // 0x295420: 0x8c245328  lw          $a0, 0x5328($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295424u; }
        if (ctx->pc != 0x295424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295424u; }
        if (ctx->pc != 0x295424u) { return; }
    }
    ctx->pc = 0x295424u;
label_295424:
    // 0x295424: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x295424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295428: 0xc087898  jal         func_21E260
    ctx->pc = 0x295428u;
    SET_GPR_U32(ctx, 31, 0x295430u);
    ctx->pc = 0x29542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295428u;
            // 0x29542c: 0x8c245328  lw          $a0, 0x5328($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295430u; }
        if (ctx->pc != 0x295430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295430u; }
        if (ctx->pc != 0x295430u) { return; }
    }
    ctx->pc = 0x295430u;
label_295430:
    // 0x295430: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295438: 0x8c225328  lw          $v0, 0x5328($at)
    ctx->pc = 0x295438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21288)));
    // 0x29543c: 0xa78398cc  sh          $v1, -0x6734($gp)
    ctx->pc = 0x29543cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940876), (uint16_t)GPR_U32(ctx, 3));
    // 0x295440: 0x8c421e18  lw          $v0, 0x1E18($v0)
    ctx->pc = 0x295440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7704)));
    // 0x295444: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x295444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295448: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x295448u;
    {
        const bool branch_taken_0x295448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295448u;
            // 0x29544c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295448) {
            ctx->pc = 0x295454u;
            goto label_295454;
        }
    }
    ctx->pc = 0x295450u;
    // 0x295450: 0xa78298cc  sh          $v0, -0x6734($gp)
    ctx->pc = 0x295450u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940876), (uint16_t)GPR_U32(ctx, 2));
label_295454:
    // 0x295454: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x295454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29545c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29545cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295460: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x295460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295464: 0x8c235324  lw          $v1, 0x5324($at)
    ctx->pc = 0x295464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
    // 0x295468: 0x0  nop
    ctx->pc = 0x295468u;
    // NOP
label_29546c:
    // 0x29546c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x29546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x295470: 0xc4401e14  lwc1        $f0, 0x1E14($v0)
    ctx->pc = 0x295470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x295478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29547c: 0x0  nop
    ctx->pc = 0x29547cu;
    // NOP
    // 0x295480: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x295480u;
    {
        const bool branch_taken_0x295480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295480) {
            ctx->pc = 0x29548Cu;
            goto label_29548c;
        }
    }
    ctx->pc = 0x295488u;
    // 0x295488: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x295488u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29548c:
    // 0x29548c: 0x0  nop
    ctx->pc = 0x29548cu;
    // NOP
    // 0x295490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x295490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x295494: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x295494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x295498: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x295498u;
    {
        const bool branch_taken_0x295498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295498u;
            // 0x29549c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295498) {
            ctx->pc = 0x29546Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29546c;
        }
    }
    ctx->pc = 0x2954A0u;
    // 0x2954a0: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x2954a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2954a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2954a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2954a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2954A8u;
    SET_GPR_U32(ctx, 31, 0x2954B0u);
    ctx->pc = 0x2954ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954A8u;
            // 0x2954ac: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954B0u; }
        if (ctx->pc != 0x2954B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954B0u; }
        if (ctx->pc != 0x2954B0u) { return; }
    }
    ctx->pc = 0x2954B0u;
label_2954b0:
    // 0x2954b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2954b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2954b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2954b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2954b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2954bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2954bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2954c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2954c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2954c4: 0xc0a5314  jal         func_294C50
    ctx->pc = 0x2954C4u;
    SET_GPR_U32(ctx, 31, 0x2954CCu);
    ctx->pc = 0x2954C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954C4u;
            // 0x2954c8: 0xe78098bc  swc1        $f0, -0x6744($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940860), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x294C50u;
    if (runtime->hasFunction(0x294C50u)) {
        auto targetFn = runtime->lookupFunction(0x294C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954CCu; }
        if (ctx->pc != 0x2954CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnderMsg__14CMenuQuestViewFi_0x294c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954CCu; }
        if (ctx->pc != 0x2954CCu) { return; }
    }
    ctx->pc = 0x2954CCu;
label_2954cc:
    // 0x2954cc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2954CCu;
    {
        const bool branch_taken_0x2954cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2954D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2954CCu;
            // 0x2954d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954cc) {
            ctx->pc = 0x2955E0u;
            goto label_2955e0;
        }
    }
    ctx->pc = 0x2954D4u;
label_2954d4:
    // 0x2954d4: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2954D4u;
    {
        const bool branch_taken_0x2954d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2954d4) {
            ctx->pc = 0x2955DCu;
            goto label_2955dc;
        }
    }
    ctx->pc = 0x2954DCu;
    // 0x2954dc: 0xc07fcb0  jal         func_1FF2C0
    ctx->pc = 0x2954DCu;
    SET_GPR_U32(ctx, 31, 0x2954E4u);
    ctx->pc = 0x2954E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954DCu;
            // 0x2954e0: 0x8e040110  lw          $a0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2C0u;
    if (runtime->hasFunction(0x1FF2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954E4u; }
        if (ctx->pc != 0x2954E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTableIndex__Fi_0x1ff2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954E4u; }
        if (ctx->pc != 0x2954E4u) { return; }
    }
    ctx->pc = 0x2954E4u;
label_2954e4:
    // 0x2954e4: 0xaf8298d4  sw          $v0, -0x672C($gp)
    ctx->pc = 0x2954e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 2));
    // 0x2954e8: 0x8f8298d4  lw          $v0, -0x672C($gp)
    ctx->pc = 0x2954e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940884)));
    // 0x2954ec: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2954ECu;
    {
        const bool branch_taken_0x2954ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2954ec) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x2954F4u;
    // 0x2954f4: 0x8f8498d0  lw          $a0, -0x6730($gp)
    ctx->pc = 0x2954f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
    // 0x2954f8: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x2954F8u;
    SET_GPR_U32(ctx, 31, 0x295500u);
    ctx->pc = 0x2954FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954F8u;
            // 0x2954fc: 0x84450000  lh          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295500u; }
        if (ctx->pc != 0x295500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295500u; }
        if (ctx->pc != 0x295500u) { return; }
    }
    ctx->pc = 0x295500u;
label_295500:
    // 0x295500: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x295500u;
    {
        const bool branch_taken_0x295500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295500) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295508u;
    // 0x295508: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x295508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29550c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x29550Cu;
    {
        const bool branch_taken_0x29550c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29550Cu;
            // 0x295510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29550c) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295514u;
    // 0x295514: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x295514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x295518: 0xa38298c8  sb          $v0, -0x6738($gp)
    ctx->pc = 0x295518u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940872), (uint8_t)GPR_U32(ctx, 2));
    // 0x29551c: 0x8f8298d4  lw          $v0, -0x672C($gp)
    ctx->pc = 0x29551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940884)));
    // 0x295520: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x295520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295524: 0xc07fe84  jal         func_1FFA10
    ctx->pc = 0x295524u;
    SET_GPR_U32(ctx, 31, 0x29552Cu);
    ctx->pc = 0x295528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295524u;
            // 0x295528: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA10u;
    if (runtime->hasFunction(0x1FFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29552Cu; }
        if (ctx->pc != 0x29552Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameStr__FiPc_0x1ffa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29552Cu; }
        if (ctx->pc != 0x29552Cu) { return; }
    }
    ctx->pc = 0x29552Cu;
label_29552c:
    // 0x29552c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29552cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295530: 0x8c245320  lw          $a0, 0x5320($at)
    ctx->pc = 0x295530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21280)));
    // 0x295534: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x295534u;
    SET_GPR_U32(ctx, 31, 0x29553Cu);
    ctx->pc = 0x295538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295534u;
            // 0x295538: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29553Cu; }
        if (ctx->pc != 0x29553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29553Cu; }
        if (ctx->pc != 0x29553Cu) { return; }
    }
    ctx->pc = 0x29553Cu;
label_29553c:
    // 0x29553c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29553cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295540: 0xc087898  jal         func_21E260
    ctx->pc = 0x295540u;
    SET_GPR_U32(ctx, 31, 0x295548u);
    ctx->pc = 0x295544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295540u;
            // 0x295544: 0x8c245320  lw          $a0, 0x5320($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295548u; }
        if (ctx->pc != 0x295548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295548u; }
        if (ctx->pc != 0x295548u) { return; }
    }
    ctx->pc = 0x295548u;
label_295548:
    // 0x295548: 0x8f8298d4  lw          $v0, -0x672C($gp)
    ctx->pc = 0x295548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940884)));
    // 0x29554c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295550: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x295550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x295554: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x295554u;
    SET_GPR_U32(ctx, 31, 0x29555Cu);
    ctx->pc = 0x295558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295554u;
            // 0x295558: 0x8c245324  lw          $a0, 0x5324($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29555Cu; }
        if (ctx->pc != 0x29555Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29555Cu; }
        if (ctx->pc != 0x29555Cu) { return; }
    }
    ctx->pc = 0x29555Cu;
label_29555c:
    // 0x29555c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295560: 0xc087898  jal         func_21E260
    ctx->pc = 0x295560u;
    SET_GPR_U32(ctx, 31, 0x295568u);
    ctx->pc = 0x295564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295560u;
            // 0x295564: 0x8c245324  lw          $a0, 0x5324($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295568u; }
        if (ctx->pc != 0x295568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295568u; }
        if (ctx->pc != 0x295568u) { return; }
    }
    ctx->pc = 0x295568u;
label_295568:
    // 0x295568: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x295568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29556c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29556cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295574: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x295574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x295578: 0x8c235324  lw          $v1, 0x5324($at)
    ctx->pc = 0x295578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
    // 0x29557c: 0x0  nop
    ctx->pc = 0x29557cu;
    // NOP
label_295580:
    // 0x295580: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x295580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x295584: 0xc4401e14  lwc1        $f0, 0x1E14($v0)
    ctx->pc = 0x295584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29558c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29558cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295590: 0x0  nop
    ctx->pc = 0x295590u;
    // NOP
    // 0x295594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x295594u;
    {
        const bool branch_taken_0x295594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295594) {
            ctx->pc = 0x2955A0u;
            goto label_2955a0;
        }
    }
    ctx->pc = 0x29559Cu;
    // 0x29559c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29559cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2955a0:
    // 0x2955a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2955a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2955a4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2955a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2955a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2955A8u;
    {
        const bool branch_taken_0x2955a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2955ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2955A8u;
            // 0x2955ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955a8) {
            ctx->pc = 0x295580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295580;
        }
    }
    ctx->pc = 0x2955B0u;
    // 0x2955b0: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x2955b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2955b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2955b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2955b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2955B8u;
    SET_GPR_U32(ctx, 31, 0x2955C0u);
    ctx->pc = 0x2955BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2955B8u;
            // 0x2955bc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955C0u; }
        if (ctx->pc != 0x2955C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955C0u; }
        if (ctx->pc != 0x2955C0u) { return; }
    }
    ctx->pc = 0x2955C0u;
label_2955c0:
    // 0x2955c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2955c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2955c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2955c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2955c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2955cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2955ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2955d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2955d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2955d4: 0xc0a5314  jal         func_294C50
    ctx->pc = 0x2955D4u;
    SET_GPR_U32(ctx, 31, 0x2955DCu);
    ctx->pc = 0x2955D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2955D4u;
            // 0x2955d8: 0xe78098bc  swc1        $f0, -0x6744($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940860), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x294C50u;
    if (runtime->hasFunction(0x294C50u)) {
        auto targetFn = runtime->lookupFunction(0x294C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955DCu; }
        if (ctx->pc != 0x2955DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnderMsg__14CMenuQuestViewFi_0x294c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955DCu; }
        if (ctx->pc != 0x2955DCu) { return; }
    }
    ctx->pc = 0x2955DCu;
label_2955dc:
    // 0x2955dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2955dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2955e0:
    // 0x2955e0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2955E0u;
    SET_GPR_U32(ctx, 31, 0x2955E8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955E8u; }
        if (ctx->pc != 0x2955E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2955E8u; }
        if (ctx->pc != 0x2955E8u) { return; }
    }
    ctx->pc = 0x2955E8u;
label_2955e8:
    // 0x2955e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2955E8u;
    {
        const bool branch_taken_0x2955e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955e8) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x2955F0u;
label_2955f0:
    // 0x2955f0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2955F0u;
    {
        const bool branch_taken_0x2955f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955f0) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x2955F8u;
    // 0x2955f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2955f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2955fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2955fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295600: 0xc08e898  jal         func_23A260
    ctx->pc = 0x295600u;
    SET_GPR_U32(ctx, 31, 0x295608u);
    ctx->pc = 0x295604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295600u;
            // 0x295604: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295608u; }
        if (ctx->pc != 0x295608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295608u; }
        if (ctx->pc != 0x295608u) { return; }
    }
    ctx->pc = 0x295608u;
label_295608:
    // 0x295608: 0xc094274  jal         func_2509D0
    ctx->pc = 0x295608u;
    SET_GPR_U32(ctx, 31, 0x295610u);
    ctx->pc = 0x29560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295608u;
            // 0x29560c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295610u; }
        if (ctx->pc != 0x295610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295610u; }
        if (ctx->pc != 0x295610u) { return; }
    }
    ctx->pc = 0x295610u;
label_295610:
    // 0x295610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x295610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295614: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x295614u;
    {
        const bool branch_taken_0x295614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295614u;
            // 0x295618: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295614) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x29561Cu;
label_29561c:
    // 0x29561c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x29561Cu;
    {
        const bool branch_taken_0x29561c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29561c) {
            ctx->pc = 0x295648u;
            goto label_295648;
        }
    }
    ctx->pc = 0x295624u;
    // 0x295624: 0xa38098c8  sb          $zero, -0x6738($gp)
    ctx->pc = 0x295624u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940872), (uint8_t)GPR_U32(ctx, 0));
    // 0x295628: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x295628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29562c: 0xaf8098a4  sw          $zero, -0x675C($gp)
    ctx->pc = 0x29562cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940836), GPR_U32(ctx, 0));
    // 0x295630: 0xaf8098d4  sw          $zero, -0x672C($gp)
    ctx->pc = 0x295630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 0));
    // 0x295634: 0xc094274  jal         func_2509D0
    ctx->pc = 0x295634u;
    SET_GPR_U32(ctx, 31, 0x29563Cu);
    ctx->pc = 0x295638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295634u;
            // 0x295638: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29563Cu; }
        if (ctx->pc != 0x29563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29563Cu; }
        if (ctx->pc != 0x29563Cu) { return; }
    }
    ctx->pc = 0x29563Cu;
label_29563c:
    // 0x29563c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295640: 0xc0a5314  jal         func_294C50
    ctx->pc = 0x295640u;
    SET_GPR_U32(ctx, 31, 0x295648u);
    ctx->pc = 0x295644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295640u;
            // 0x295644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294C50u;
    if (runtime->hasFunction(0x294C50u)) {
        auto targetFn = runtime->lookupFunction(0x294C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295648u; }
        if (ctx->pc != 0x295648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnderMsg__14CMenuQuestViewFi_0x294c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295648u; }
        if (ctx->pc != 0x295648u) { return; }
    }
    ctx->pc = 0x295648u;
label_295648:
    // 0x295648: 0xc78298a8  lwc1        $f2, -0x6758($gp)
    ctx->pc = 0x295648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29564c:
    // 0x29564c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x295650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295658: 0x0  nop
    ctx->pc = 0x295658u;
    // NOP
    // 0x29565c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x29565cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x295660: 0xe78198a8  swc1        $f1, -0x6758($gp)
    ctx->pc = 0x295660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940840), bits); }
    // 0x295664: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x295664u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x295668: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29566c: 0x0  nop
    ctx->pc = 0x29566cu;
    // NOP
    // 0x295670: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x295670u;
    {
        const bool branch_taken_0x295670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x295674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295670u;
            // 0x295674: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295670) {
            ctx->pc = 0x295688u;
            goto label_295688;
        }
    }
    ctx->pc = 0x295678u;
    // 0x295678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29567c: 0x0  nop
    ctx->pc = 0x29567cu;
    // NOP
    // 0x295680: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x295684: 0xe78098a8  swc1        $f0, -0x6758($gp)
    ctx->pc = 0x295684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940840), bits); }
label_295688:
    // 0x295688: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x295688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x29568c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x29568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x295690: 0xc78298b8  lwc1        $f2, -0x6748($gp)
    ctx->pc = 0x295690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295694: 0xc7808444  lwc1        $f0, -0x7BBC($gp)
    ctx->pc = 0x295694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295698: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x295698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29569c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2956a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2956a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2956a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2956a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2956a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2956ac: 0x0  nop
    ctx->pc = 0x2956acu;
    // NOP
    // 0x2956b0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x2956b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2956b4: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x2956b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2956b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2956b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2956bc: 0x0  nop
    ctx->pc = 0x2956bcu;
    // NOP
    // 0x2956c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2956c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2956c4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2956C4u;
    {
        const bool branch_taken_0x2956c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2956C4u;
            // 0x2956c8: 0xe78198b8  swc1        $f1, -0x6748($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956c4) {
            ctx->pc = 0x2956D0u;
            goto label_2956d0;
        }
    }
    ctx->pc = 0x2956CCu;
    // 0x2956cc: 0xe78398b8  swc1        $f3, -0x6748($gp)
    ctx->pc = 0x2956ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940856), bits); }
label_2956d0:
    // 0x2956d0: 0x838498dc  lb          $a0, -0x6724($gp)
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x2956d4: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2956D4u;
    {
        const bool branch_taken_0x2956d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2956D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2956D4u;
            // 0x2956d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956d4) {
            ctx->pc = 0x295720u;
            goto label_295720;
        }
    }
    ctx->pc = 0x2956DCu;
    // 0x2956dc: 0x3c024378  lui         $v0, 0x4378
    ctx->pc = 0x2956dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17272 << 16));
    // 0x2956e0: 0x8f839894  lw          $v1, -0x676C($gp)
    ctx->pc = 0x2956e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940820)));
    // 0x2956e4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2956e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2956e8: 0xc78398c4  lwc1        $f3, -0x673C($gp)
    ctx->pc = 0x2956e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2956ec: 0x3c02429a  lui         $v0, 0x429A
    ctx->pc = 0x2956ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17050 << 16));
    // 0x2956f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2956f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2956f4: 0xc6020114  lwc1        $f2, 0x114($s0)
    ctx->pc = 0x2956f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2956f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2956f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2956fc: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2956fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x295700: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x295700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x295704: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x295704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x295708: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x295708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29570c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x29570cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x295710: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x295710u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x295714: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x295714u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x295718: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x295718u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29571c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295720:
    // 0x295720: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x295720u;
    {
        const bool branch_taken_0x295720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x295720) {
            ctx->pc = 0x295760u;
            goto label_295760;
        }
    }
    ctx->pc = 0x295728u;
    // 0x295728: 0xc78498c4  lwc1        $f4, -0x673C($gp)
    ctx->pc = 0x295728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29572c: 0x3c024378  lui         $v0, 0x4378
    ctx->pc = 0x29572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17272 << 16));
    // 0x295730: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x295730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x295734: 0xc6020114  lwc1        $f2, 0x114($s0)
    ctx->pc = 0x295734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295738: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x295738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
    // 0x29573c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x29573cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x295740: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x295740u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x295744: 0x3c02429a  lui         $v0, 0x429A
    ctx->pc = 0x295744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17050 << 16));
    // 0x295748: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x295748u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x29574c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29574cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x295750: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x295750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x295754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295758: 0x0  nop
    ctx->pc = 0x295758u;
    // NOP
    // 0x29575c: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x29575cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_295760:
    // 0x295760: 0xc78298c0  lwc1        $f2, -0x6740($gp)
    ctx->pc = 0x295760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295764: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x295764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x295768: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x295768u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29576c: 0x0  nop
    ctx->pc = 0x29576cu;
    // NOP
    // 0x295770: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x295770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x295774: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x295774u;
    {
        const bool branch_taken_0x295774 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x295778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295774u;
            // 0x295778: 0xe78198c0  swc1        $f1, -0x6740($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295774) {
            ctx->pc = 0x295780u;
            goto label_295780;
        }
    }
    ctx->pc = 0x29577Cu;
    // 0x29577c: 0xe78398c0  swc1        $f3, -0x6740($gp)
    ctx->pc = 0x29577cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), bits); }
label_295780:
    // 0x295780: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x295780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x295784: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x295788: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x29578c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295790: 0xc78298b4  lwc1        $f2, -0x674C($gp)
    ctx->pc = 0x295790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x295794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295798: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x295798u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29579c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x29579cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2957a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2957a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2957a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2957a8: 0x24630052  addiu       $v1, $v1, 0x52
    ctx->pc = 0x2957a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 82));
    // 0x2957ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2957acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2957b0: 0x0  nop
    ctx->pc = 0x2957b0u;
    // NOP
    // 0x2957b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2957b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2957b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2957b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2957bc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2957bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2957c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2957c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2957c4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2957c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2957c8: 0xe78098b4  swc1        $f0, -0x674C($gp)
    ctx->pc = 0x2957c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940852), bits); }
label_2957cc:
    // 0x2957cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2957ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2957d0:
    // 0x2957d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2957d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2957d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2957d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2957d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2957d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2957dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2957dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2957e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2957e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2957e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2957E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2957E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957E4u;
            // 0x2957e8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2957ECu;
}
