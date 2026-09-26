#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_mainloop.cpp
// Address: 0x373580 - 0x373930
void ps2___sinit_mainloop_cpp_0x373580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_mainloop_cpp_0x373580");
#endif

    switch (ctx->pc) {
        case 0x3735a0u: goto label_3735a0;
        case 0x3735acu: goto label_3735ac;
        case 0x3735c0u: goto label_3735c0;
        case 0x3735d4u: goto label_3735d4;
        case 0x3735e8u: goto label_3735e8;
        case 0x3735f4u: goto label_3735f4;
        case 0x37360cu: goto label_37360c;
        case 0x373614u: goto label_373614;
        case 0x37361cu: goto label_37361c;
        case 0x37363cu: goto label_37363c;
        case 0x373644u: goto label_373644;
        case 0x37364cu: goto label_37364c;
        case 0x37366cu: goto label_37366c;
        case 0x373674u: goto label_373674;
        case 0x37367cu: goto label_37367c;
        case 0x37369cu: goto label_37369c;
        case 0x3736a8u: goto label_3736a8;
        case 0x3736b4u: goto label_3736b4;
        case 0x3736c0u: goto label_3736c0;
        case 0x3736e4u: goto label_3736e4;
        case 0x3736ecu: goto label_3736ec;
        case 0x3736f4u: goto label_3736f4;
        case 0x3736fcu: goto label_3736fc;
        case 0x37371cu: goto label_37371c;
        case 0x373724u: goto label_373724;
        case 0x37372cu: goto label_37372c;
        case 0x37374cu: goto label_37374c;
        case 0x373754u: goto label_373754;
        case 0x37375cu: goto label_37375c;
        case 0x373764u: goto label_373764;
        case 0x373784u: goto label_373784;
        case 0x37378cu: goto label_37378c;
        case 0x373794u: goto label_373794;
        case 0x3737b4u: goto label_3737b4;
        case 0x3737c0u: goto label_3737c0;
        case 0x3737d4u: goto label_3737d4;
        case 0x3737dcu: goto label_3737dc;
        case 0x3737e4u: goto label_3737e4;
        case 0x373808u: goto label_373808;
        case 0x373810u: goto label_373810;
        case 0x373818u: goto label_373818;
        case 0x37383cu: goto label_37383c;
        case 0x373848u: goto label_373848;
        case 0x373854u: goto label_373854;
        case 0x373860u: goto label_373860;
        case 0x37386cu: goto label_37386c;
        case 0x373878u: goto label_373878;
        case 0x373884u: goto label_373884;
        case 0x373890u: goto label_373890;
        case 0x37389cu: goto label_37389c;
        case 0x3738a4u: goto label_3738a4;
        case 0x3738acu: goto label_3738ac;
        case 0x3738d0u: goto label_3738d0;
        case 0x3738dcu: goto label_3738dc;
        case 0x3738e8u: goto label_3738e8;
        case 0x3738f4u: goto label_3738f4;
        case 0x373914u: goto label_373914;
        case 0x373920u: goto label_373920;
        default: break;
    }

    ctx->pc = 0x373580u;

    // 0x373580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373584: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x373584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x373588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x373588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37358c: 0x24848070  addiu       $a0, $a0, -0x7F90
    ctx->pc = 0x37358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934640));
    // 0x373590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373594: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x373594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x373598: 0xc049c86  jal         func_127218
    ctx->pc = 0x373598u;
    SET_GPR_U32(ctx, 31, 0x3735A0u);
    ctx->pc = 0x37359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373598u;
            // 0x37359c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735A0u; }
        if (ctx->pc != 0x3735A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735A0u; }
        if (ctx->pc != 0x3735A0u) { return; }
    }
    ctx->pc = 0x3735A0u;
label_3735a0:
    // 0x3735a0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3735a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3735a4: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x3735A4u;
    SET_GPR_U32(ctx, 31, 0x3735ACu);
    ctx->pc = 0x3735A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3735A4u;
            // 0x3735a8: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735ACu; }
        if (ctx->pc != 0x3735ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735ACu; }
        if (ctx->pc != 0x3735ACu) { return; }
    }
    ctx->pc = 0x3735ACu;
label_3735ac:
    // 0x3735ac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3735acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3735b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3735b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735b4: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x3735b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    // 0x3735b8: 0xc049c86  jal         func_127218
    ctx->pc = 0x3735B8u;
    SET_GPR_U32(ctx, 31, 0x3735C0u);
    ctx->pc = 0x3735BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3735B8u;
            // 0x3735bc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735C0u; }
        if (ctx->pc != 0x3735C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735C0u; }
        if (ctx->pc != 0x3735C0u) { return; }
    }
    ctx->pc = 0x3735C0u;
label_3735c0:
    // 0x3735c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3735c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3735c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3735c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735c8: 0x24848190  addiu       $a0, $a0, -0x7E70
    ctx->pc = 0x3735c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934928));
    // 0x3735cc: 0xc049c86  jal         func_127218
    ctx->pc = 0x3735CCu;
    SET_GPR_U32(ctx, 31, 0x3735D4u);
    ctx->pc = 0x3735D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3735CCu;
            // 0x3735d0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735D4u; }
        if (ctx->pc != 0x3735D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735D4u; }
        if (ctx->pc != 0x3735D4u) { return; }
    }
    ctx->pc = 0x3735D4u;
label_3735d4:
    // 0x3735d4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3735d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3735d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3735d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735dc: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x3735dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    // 0x3735e0: 0xc049c86  jal         func_127218
    ctx->pc = 0x3735E0u;
    SET_GPR_U32(ctx, 31, 0x3735E8u);
    ctx->pc = 0x3735E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3735E0u;
            // 0x3735e4: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735E8u; }
        if (ctx->pc != 0x3735E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735E8u; }
        if (ctx->pc != 0x3735E8u) { return; }
    }
    ctx->pc = 0x3735E8u;
label_3735e8:
    // 0x3735e8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3735e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3735ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x3735ECu;
    SET_GPR_U32(ctx, 31, 0x3735F4u);
    ctx->pc = 0x3735F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3735ECu;
            // 0x3735f0: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735F4u; }
        if (ctx->pc != 0x3735F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735F4u; }
        if (ctx->pc != 0x3735F4u) { return; }
    }
    ctx->pc = 0x3735F4u;
label_3735f4:
    // 0x3735f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x3735f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x3735f8: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x3735f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x3735fc: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x3735fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
    // 0x373600: 0x3c0101df  lui         $at, 0x1DF
    ctx->pc = 0x373600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)479 << 16));
    // 0x373604: 0x261082a4  addiu       $s0, $s0, -0x7D5C
    ctx->pc = 0x373604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935204));
    // 0x373608: 0xac2287a8  sw          $v0, -0x7858($at)
    ctx->pc = 0x373608u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936488), GPR_U32(ctx, 2));
label_37360c:
    // 0x37360c: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x37360Cu;
    SET_GPR_U32(ctx, 31, 0x373614u);
    ctx->pc = 0x373610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37360Cu;
            // 0x373610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373614u; }
        if (ctx->pc != 0x373614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373614u; }
        if (ctx->pc != 0x373614u) { return; }
    }
    ctx->pc = 0x373614u;
label_373614:
    // 0x373614: 0xc0a0ad0  jal         func_282B40
    ctx->pc = 0x373614u;
    SET_GPR_U32(ctx, 31, 0x37361Cu);
    ctx->pc = 0x373618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373614u;
            // 0x373618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37361Cu; }
        if (ctx->pc != 0x37361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37361Cu; }
        if (ctx->pc != 0x37361Cu) { return; }
    }
    ctx->pc = 0x37361Cu;
label_37361c:
    // 0x37361c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x37361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x373620: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x373620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x373624: 0x2442a2a4  addiu       $v0, $v0, -0x5D5C
    ctx->pc = 0x373624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943396));
    // 0x373628: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37362c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37362Cu;
    {
        const bool branch_taken_0x37362c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37362c) {
            ctx->pc = 0x37360Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37360c;
        }
    }
    ctx->pc = 0x373634u;
    // 0x373634: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x373634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x373638: 0x2610a2a8  addiu       $s0, $s0, -0x5D58
    ctx->pc = 0x373638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943400));
label_37363c:
    // 0x37363c: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x37363Cu;
    SET_GPR_U32(ctx, 31, 0x373644u);
    ctx->pc = 0x373640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37363Cu;
            // 0x373640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373644u; }
        if (ctx->pc != 0x373644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373644u; }
        if (ctx->pc != 0x373644u) { return; }
    }
    ctx->pc = 0x373644u;
label_373644:
    // 0x373644: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x373644u;
    SET_GPR_U32(ctx, 31, 0x37364Cu);
    ctx->pc = 0x373648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373644u;
            // 0x373648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D00u;
    if (runtime->hasFunction(0x282D00u)) {
        auto targetFn = runtime->lookupFunction(0x282D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37364Cu; }
        if (ctx->pc != 0x37364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneCameraFv_0x282d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37364Cu; }
        if (ctx->pc != 0x37364Cu) { return; }
    }
    ctx->pc = 0x37364Cu;
label_37364c:
    // 0x37364c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x37364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x373650: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x373650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x373654: 0x2442a468  addiu       $v0, $v0, -0x5B98
    ctx->pc = 0x373654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943848));
    // 0x373658: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37365c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37365Cu;
    {
        const bool branch_taken_0x37365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37365c) {
            ctx->pc = 0x37363Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37363c;
        }
    }
    ctx->pc = 0x373664u;
    // 0x373664: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x373664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x373668: 0x2610a46c  addiu       $s0, $s0, -0x5B94
    ctx->pc = 0x373668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943852));
label_37366c:
    // 0x37366c: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x37366Cu;
    SET_GPR_U32(ctx, 31, 0x373674u);
    ctx->pc = 0x373670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37366Cu;
            // 0x373670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373674u; }
        if (ctx->pc != 0x373674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373674u; }
        if (ctx->pc != 0x373674u) { return; }
    }
    ctx->pc = 0x373674u;
label_373674:
    // 0x373674: 0xc0a0afc  jal         func_282BF0
    ctx->pc = 0x373674u;
    SET_GPR_U32(ctx, 31, 0x37367Cu);
    ctx->pc = 0x373678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373674u;
            // 0x373678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282BF0u;
    if (runtime->hasFunction(0x282BF0u)) {
        auto targetFn = runtime->lookupFunction(0x282BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37367Cu; }
        if (ctx->pc != 0x37367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneMessageFv_0x282bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37367Cu; }
        if (ctx->pc != 0x37367Cu) { return; }
    }
    ctx->pc = 0x37367Cu;
label_37367c:
    // 0x37367c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x37367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x373680: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x373680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x373684: 0x2442a62c  addiu       $v0, $v0, -0x59D4
    ctx->pc = 0x373684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944300));
    // 0x373688: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37368c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37368Cu;
    {
        const bool branch_taken_0x37368c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37368Cu;
            // 0x373690: 0x3c0401de  lui         $a0, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37368c) {
            ctx->pc = 0x37366Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37366c;
        }
    }
    ctx->pc = 0x373694u;
    // 0x373694: 0xc05a434  jal         func_1690D0
    ctx->pc = 0x373694u;
    SET_GPR_U32(ctx, 31, 0x37369Cu);
    ctx->pc = 0x373698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373694u;
            // 0x373698: 0x2484a630  addiu       $a0, $a0, -0x59D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1690D0u;
    if (runtime->hasFunction(0x1690D0u)) {
        auto targetFn = runtime->lookupFunction(0x1690D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37369Cu; }
        if (ctx->pc != 0x37369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMdsListSetFv_0x1690d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37369Cu; }
        if (ctx->pc != 0x37369Cu) { return; }
    }
    ctx->pc = 0x37369Cu;
label_37369c:
    // 0x37369c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x37369cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3736a0: 0xc04b120  jal         func_12C480
    ctx->pc = 0x3736A0u;
    SET_GPR_U32(ctx, 31, 0x3736A8u);
    ctx->pc = 0x3736A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3736A0u;
            // 0x3736a4: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736A8u; }
        if (ctx->pc != 0x3736A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736A8u; }
        if (ctx->pc != 0x3736A8u) { return; }
    }
    ctx->pc = 0x3736A8u;
label_3736a8:
    // 0x3736a8: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x3736a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x3736ac: 0x2610a7c0  addiu       $s0, $s0, -0x5840
    ctx->pc = 0x3736acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944704));
    // 0x3736b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3736b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3736b4:
    // 0x3736b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3736b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736b8: 0xc049c86  jal         func_127218
    ctx->pc = 0x3736B8u;
    SET_GPR_U32(ctx, 31, 0x3736C0u);
    ctx->pc = 0x3736BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3736B8u;
            // 0x3736bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736C0u; }
        if (ctx->pc != 0x3736C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736C0u; }
        if (ctx->pc != 0x3736C0u) { return; }
    }
    ctx->pc = 0x3736C0u;
label_3736c0:
    // 0x3736c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3736c4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x3736c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3736c8: 0x2442aa40  addiu       $v0, $v0, -0x55C0
    ctx->pc = 0x3736c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x3736cc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3736ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3736d0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3736D0u;
    {
        const bool branch_taken_0x3736d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3736D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3736D0u;
            // 0x3736d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736d0) {
            ctx->pc = 0x3736B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3736b4;
        }
    }
    ctx->pc = 0x3736D8u;
    // 0x3736d8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3736d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3736dc: 0xc0611f0  jal         func_1847C0
    ctx->pc = 0x3736DCu;
    SET_GPR_U32(ctx, 31, 0x3736E4u);
    ctx->pc = 0x3736E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3736DCu;
            // 0x3736e0: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847C0u;
    if (runtime->hasFunction(0x1847C0u)) {
        auto targetFn = runtime->lookupFunction(0x1847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736E4u; }
        if (ctx->pc != 0x3736E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CFireRasterFv_0x1847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736E4u; }
        if (ctx->pc != 0x3736E4u) { return; }
    }
    ctx->pc = 0x3736E4u;
label_3736e4:
    // 0x3736e4: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x3736e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x3736e8: 0x2610aa44  addiu       $s0, $s0, -0x55BC
    ctx->pc = 0x3736e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945348));
label_3736ec:
    // 0x3736ec: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3736ECu;
    SET_GPR_U32(ctx, 31, 0x3736F4u);
    ctx->pc = 0x3736F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3736ECu;
            // 0x3736f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736F4u; }
        if (ctx->pc != 0x3736F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736F4u; }
        if (ctx->pc != 0x3736F4u) { return; }
    }
    ctx->pc = 0x3736F4u;
label_3736f4:
    // 0x3736f4: 0xc0a0ad8  jal         func_282B60
    ctx->pc = 0x3736F4u;
    SET_GPR_U32(ctx, 31, 0x3736FCu);
    ctx->pc = 0x3736F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3736F4u;
            // 0x3736f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B60u;
    if (runtime->hasFunction(0x282B60u)) {
        auto targetFn = runtime->lookupFunction(0x282B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736FCu; }
        if (ctx->pc != 0x3736FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneMapFv_0x282b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736FCu; }
        if (ctx->pc != 0x3736FCu) { return; }
    }
    ctx->pc = 0x3736FCu;
label_3736fc:
    // 0x3736fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3736fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x373700: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x373700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x373704: 0x2442ab24  addiu       $v0, $v0, -0x54DC
    ctx->pc = 0x373704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945572));
    // 0x373708: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37370c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37370Cu;
    {
        const bool branch_taken_0x37370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37370c) {
            ctx->pc = 0x3736ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3736ec;
        }
    }
    ctx->pc = 0x373714u;
    // 0x373714: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x373714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x373718: 0x2610ab28  addiu       $s0, $s0, -0x54D8
    ctx->pc = 0x373718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945576));
label_37371c:
    // 0x37371c: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x37371Cu;
    SET_GPR_U32(ctx, 31, 0x373724u);
    ctx->pc = 0x373720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37371Cu;
            // 0x373720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373724u; }
        if (ctx->pc != 0x373724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373724u; }
        if (ctx->pc != 0x373724u) { return; }
    }
    ctx->pc = 0x373724u;
label_373724:
    // 0x373724: 0xc0a0b64  jal         func_282D90
    ctx->pc = 0x373724u;
    SET_GPR_U32(ctx, 31, 0x37372Cu);
    ctx->pc = 0x373728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373724u;
            // 0x373728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D90u;
    if (runtime->hasFunction(0x282D90u)) {
        auto targetFn = runtime->lookupFunction(0x282D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37372Cu; }
        if (ctx->pc != 0x37372Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneSkyFv_0x282d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37372Cu; }
        if (ctx->pc != 0x37372Cu) { return; }
    }
    ctx->pc = 0x37372Cu;
label_37372c:
    // 0x37372c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x37372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x373730: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x373730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x373734: 0x2442ac08  addiu       $v0, $v0, -0x53F8
    ctx->pc = 0x373734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945800));
    // 0x373738: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37373c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37373Cu;
    {
        const bool branch_taken_0x37373c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37373c) {
            ctx->pc = 0x37371Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37371c;
        }
    }
    ctx->pc = 0x373744u;
    // 0x373744: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x373744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x373748: 0x2610ac0c  addiu       $s0, $s0, -0x53F4
    ctx->pc = 0x373748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945804));
label_37374c:
    // 0x37374c: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x37374Cu;
    SET_GPR_U32(ctx, 31, 0x373754u);
    ctx->pc = 0x373750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37374Cu;
            // 0x373750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373754u; }
        if (ctx->pc != 0x373754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373754u; }
        if (ctx->pc != 0x373754u) { return; }
    }
    ctx->pc = 0x373754u;
label_373754:
    // 0x373754: 0xc0a0ad0  jal         func_282B40
    ctx->pc = 0x373754u;
    SET_GPR_U32(ctx, 31, 0x37375Cu);
    ctx->pc = 0x373758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373754u;
            // 0x373758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37375Cu; }
        if (ctx->pc != 0x37375Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37375Cu; }
        if (ctx->pc != 0x37375Cu) { return; }
    }
    ctx->pc = 0x37375Cu;
label_37375c:
    // 0x37375c: 0xc0a0b68  jal         func_282DA0
    ctx->pc = 0x37375Cu;
    SET_GPR_U32(ctx, 31, 0x373764u);
    ctx->pc = 0x373760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37375Cu;
            // 0x373760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DA0u;
    if (runtime->hasFunction(0x282DA0u)) {
        auto targetFn = runtime->lookupFunction(0x282DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373764u; }
        if (ctx->pc != 0x373764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneGameObjFv_0x282da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373764u; }
        if (ctx->pc != 0x373764u) { return; }
    }
    ctx->pc = 0x373764u;
label_373764:
    // 0x373764: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x373764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x373768: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x373768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x37376c: 0x2442ad0c  addiu       $v0, $v0, -0x52F4
    ctx->pc = 0x37376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946060));
    // 0x373770: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x373774: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x373774u;
    {
        const bool branch_taken_0x373774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373774) {
            ctx->pc = 0x37374Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37374c;
        }
    }
    ctx->pc = 0x37377Cu;
    // 0x37377c: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x37377cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x373780: 0x2610ad10  addiu       $s0, $s0, -0x52F0
    ctx->pc = 0x373780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946064));
label_373784:
    // 0x373784: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x373784u;
    SET_GPR_U32(ctx, 31, 0x37378Cu);
    ctx->pc = 0x373788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373784u;
            // 0x373788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37378Cu; }
        if (ctx->pc != 0x37378Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37378Cu; }
        if (ctx->pc != 0x37378Cu) { return; }
    }
    ctx->pc = 0x37378Cu;
label_37378c:
    // 0x37378c: 0xc0a0b6c  jal         func_282DB0
    ctx->pc = 0x37378Cu;
    SET_GPR_U32(ctx, 31, 0x373794u);
    ctx->pc = 0x373790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37378Cu;
            // 0x373790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DB0u;
    if (runtime->hasFunction(0x282DB0u)) {
        auto targetFn = runtime->lookupFunction(0x282DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373794u; }
        if (ctx->pc != 0x373794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneEffectFv_0x282db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373794u; }
        if (ctx->pc != 0x373794u) { return; }
    }
    ctx->pc = 0x373794u;
label_373794:
    // 0x373794: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x373794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x373798: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x373798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x37379c: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x37379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x3737a0: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x3737a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3737a4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3737A4u;
    {
        const bool branch_taken_0x3737a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3737a4) {
            ctx->pc = 0x373784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_373784;
        }
    }
    ctx->pc = 0x3737ACu;
    // 0x3737ac: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x3737ACu;
    SET_GPR_U32(ctx, 31, 0x3737B4u);
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737B4u; }
        if (ctx->pc != 0x3737B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737B4u; }
        if (ctx->pc != 0x3737B4u) { return; }
    }
    ctx->pc = 0x3737B4u;
label_3737b4:
    // 0x3737b4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3737b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3737b8: 0xc0a1454  jal         func_285150
    ctx->pc = 0x3737B8u;
    SET_GPR_U32(ctx, 31, 0x3737C0u);
    ctx->pc = 0x3737BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3737B8u;
            // 0x3737bc: 0x2484af08  addiu       $a0, $a0, -0x50F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737C0u; }
        if (ctx->pc != 0x3737C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737C0u; }
        if (ctx->pc != 0x3737C0u) { return; }
    }
    ctx->pc = 0x3737C0u;
label_3737c0:
    // 0x3737c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3737c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3737c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3737c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737c8: 0x2484b0f0  addiu       $a0, $a0, -0x4F10
    ctx->pc = 0x3737c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947056));
    // 0x3737cc: 0xc049c86  jal         func_127218
    ctx->pc = 0x3737CCu;
    SET_GPR_U32(ctx, 31, 0x3737D4u);
    ctx->pc = 0x3737D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3737CCu;
            // 0x3737d0: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737D4u; }
        if (ctx->pc != 0x3737D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737D4u; }
        if (ctx->pc != 0x3737D4u) { return; }
    }
    ctx->pc = 0x3737D4u;
label_3737d4:
    // 0x3737d4: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x3737d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x3737d8: 0x2610b2c0  addiu       $s0, $s0, -0x4D40
    ctx->pc = 0x3737d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947520));
label_3737dc:
    // 0x3737dc: 0xc0b3444  jal         func_2CD110
    ctx->pc = 0x3737DCu;
    SET_GPR_U32(ctx, 31, 0x3737E4u);
    ctx->pc = 0x3737E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3737DCu;
            // 0x3737e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD110u;
    if (runtime->hasFunction(0x2CD110u)) {
        auto targetFn = runtime->lookupFunction(0x2CD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737E4u; }
        if (ctx->pc != 0x3737E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerDataFv_0x2cd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3737E4u; }
        if (ctx->pc != 0x3737E4u) { return; }
    }
    ctx->pc = 0x3737E4u;
label_3737e4:
    // 0x3737e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3737e8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x3737e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3737ec: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x3737ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x3737f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3737f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3737f4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3737F4u;
    {
        const bool branch_taken_0x3737f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3737f4) {
            ctx->pc = 0x3737DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3737dc;
        }
    }
    ctx->pc = 0x3737FCu;
    // 0x3737fc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3737fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x373800: 0xc0b3488  jal         func_2CD220
    ctx->pc = 0x373800u;
    SET_GPR_U32(ctx, 31, 0x373808u);
    ctx->pc = 0x373804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373800u;
            // 0x373804: 0x2484b2b0  addiu       $a0, $a0, -0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD220u;
    if (runtime->hasFunction(0x2CD220u)) {
        auto targetFn = runtime->lookupFunction(0x2CD220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373808u; }
        if (ctx->pc != 0x373808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerMngrFv_0x2cd220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373808u; }
        if (ctx->pc != 0x373808u) { return; }
    }
    ctx->pc = 0x373808u;
label_373808:
    // 0x373808: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x373808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x37380c: 0x261012e0  addiu       $s0, $s0, 0x12E0
    ctx->pc = 0x37380cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4832));
label_373810:
    // 0x373810: 0xc04e640  jal         func_139900
    ctx->pc = 0x373810u;
    SET_GPR_U32(ctx, 31, 0x373818u);
    ctx->pc = 0x373814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373810u;
            // 0x373814: 0x26040430  addiu       $a0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373818u; }
        if (ctx->pc != 0x373818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373818u; }
        if (ctx->pc != 0x373818u) { return; }
    }
    ctx->pc = 0x373818u;
label_373818:
    // 0x373818: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x373818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x37381c: 0x26100460  addiu       $s0, $s0, 0x460
    ctx->pc = 0x37381cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1120));
    // 0x373820: 0x24421ba0  addiu       $v0, $v0, 0x1BA0
    ctx->pc = 0x373820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7072));
    // 0x373824: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x373824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x373828: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x373828u;
    {
        const bool branch_taken_0x373828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373828) {
            ctx->pc = 0x373810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_373810;
        }
    }
    ctx->pc = 0x373830u;
    // 0x373830: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x373830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x373834: 0xc04e640  jal         func_139900
    ctx->pc = 0x373834u;
    SET_GPR_U32(ctx, 31, 0x37383Cu);
    ctx->pc = 0x373838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373834u;
            // 0x373838: 0x24842030  addiu       $a0, $a0, 0x2030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37383Cu; }
        if (ctx->pc != 0x37383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37383Cu; }
        if (ctx->pc != 0x37383Cu) { return; }
    }
    ctx->pc = 0x37383Cu;
label_37383c:
    // 0x37383c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x37383cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x373840: 0xc04e640  jal         func_139900
    ctx->pc = 0x373840u;
    SET_GPR_U32(ctx, 31, 0x373848u);
    ctx->pc = 0x373844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373840u;
            // 0x373844: 0x248426b0  addiu       $a0, $a0, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373848u; }
        if (ctx->pc != 0x373848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373848u; }
        if (ctx->pc != 0x373848u) { return; }
    }
    ctx->pc = 0x373848u;
label_373848:
    // 0x373848: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x373848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x37384c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37384Cu;
    SET_GPR_U32(ctx, 31, 0x373854u);
    ctx->pc = 0x373850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37384Cu;
            // 0x373850: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373854u; }
        if (ctx->pc != 0x373854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373854u; }
        if (ctx->pc != 0x373854u) { return; }
    }
    ctx->pc = 0x373854u;
label_373854:
    // 0x373854: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x373854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x373858: 0xc04e640  jal         func_139900
    ctx->pc = 0x373858u;
    SET_GPR_U32(ctx, 31, 0x373860u);
    ctx->pc = 0x37385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373858u;
            // 0x37385c: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373860u; }
        if (ctx->pc != 0x373860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373860u; }
        if (ctx->pc != 0x373860u) { return; }
    }
    ctx->pc = 0x373860u;
label_373860:
    // 0x373860: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x373860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x373864: 0xc04e640  jal         func_139900
    ctx->pc = 0x373864u;
    SET_GPR_U32(ctx, 31, 0x37386Cu);
    ctx->pc = 0x373868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373864u;
            // 0x373868: 0x24848770  addiu       $a0, $a0, -0x7890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37386Cu; }
        if (ctx->pc != 0x37386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37386Cu; }
        if (ctx->pc != 0x37386Cu) { return; }
    }
    ctx->pc = 0x37386Cu;
label_37386c:
    // 0x37386c: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x37386cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x373870: 0xc063154  jal         func_18C550
    ctx->pc = 0x373870u;
    SET_GPR_U32(ctx, 31, 0x373878u);
    ctx->pc = 0x373874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373870u;
            // 0x373874: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C550u;
    if (runtime->hasFunction(0x18C550u)) {
        auto targetFn = runtime->lookupFunction(0x18C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373878u; }
        if (ctx->pc != 0x373878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CLoopSeMngrFv_0x18c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373878u; }
        if (ctx->pc != 0x373878u) { return; }
    }
    ctx->pc = 0x373878u;
label_373878:
    // 0x373878: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x373878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x37387c: 0xc0a0b90  jal         func_282E40
    ctx->pc = 0x37387Cu;
    SET_GPR_U32(ctx, 31, 0x373884u);
    ctx->pc = 0x373880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37387Cu;
            // 0x373880: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282E40u;
    if (runtime->hasFunction(0x282E40u)) {
        auto targetFn = runtime->lookupFunction(0x282E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373884u; }
        if (ctx->pc != 0x373884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitAllData__6CSceneFv_0x282e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373884u; }
        if (ctx->pc != 0x373884u) { return; }
    }
    ctx->pc = 0x373884u;
label_373884:
    // 0x373884: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x373884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x373888: 0xc04e640  jal         func_139900
    ctx->pc = 0x373888u;
    SET_GPR_U32(ctx, 31, 0x373890u);
    ctx->pc = 0x37388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373888u;
            // 0x37388c: 0x2484a0b0  addiu       $a0, $a0, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373890u; }
        if (ctx->pc != 0x373890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373890u; }
        if (ctx->pc != 0x373890u) { return; }
    }
    ctx->pc = 0x373890u;
label_373890:
    // 0x373890: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x373890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x373894: 0xc04e640  jal         func_139900
    ctx->pc = 0x373894u;
    SET_GPR_U32(ctx, 31, 0x37389Cu);
    ctx->pc = 0x373898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373894u;
            // 0x373898: 0x248417e0  addiu       $a0, $a0, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37389Cu; }
        if (ctx->pc != 0x37389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37389Cu; }
        if (ctx->pc != 0x37389Cu) { return; }
    }
    ctx->pc = 0x37389Cu;
label_37389c:
    // 0x37389c: 0x3c1001e0  lui         $s0, 0x1E0
    ctx->pc = 0x37389cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)480 << 16));
    // 0x3738a0: 0x26103434  addiu       $s0, $s0, 0x3434
    ctx->pc = 0x3738a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13364));
label_3738a4:
    // 0x3738a4: 0xc065154  jal         func_194550
    ctx->pc = 0x3738A4u;
    SET_GPR_U32(ctx, 31, 0x3738ACu);
    ctx->pc = 0x3738A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738A4u;
            // 0x3738a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194550u;
    if (runtime->hasFunction(0x194550u)) {
        auto targetFn = runtime->lookupFunction(0x194550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738ACu; }
        if (ctx->pc != 0x3738ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CEditDataFv_0x194550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738ACu; }
        if (ctx->pc != 0x3738ACu) { return; }
    }
    ctx->pc = 0x3738ACu;
label_3738ac:
    // 0x3738ac: 0x3c0201e2  lui         $v0, 0x1E2
    ctx->pc = 0x3738acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)482 << 16));
    // 0x3738b0: 0x26105510  addiu       $s0, $s0, 0x5510
    ctx->pc = 0x3738b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21776));
    // 0x3738b4: 0x2442dd84  addiu       $v0, $v0, -0x227C
    ctx->pc = 0x3738b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958468));
    // 0x3738b8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3738b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3738bc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3738BCu;
    {
        const bool branch_taken_0x3738bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3738bc) {
            ctx->pc = 0x3738A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3738a4;
        }
    }
    ctx->pc = 0x3738C4u;
    // 0x3738c4: 0x3c0401e2  lui         $a0, 0x1E2
    ctx->pc = 0x3738c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)482 << 16));
    // 0x3738c8: 0xc0650ec  jal         func_1943B0
    ctx->pc = 0x3738C8u;
    SET_GPR_U32(ctx, 31, 0x3738D0u);
    ctx->pc = 0x3738CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738C8u;
            // 0x3738cc: 0x2484eab0  addiu       $a0, $a0, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1943B0u;
    if (runtime->hasFunction(0x1943B0u)) {
        auto targetFn = runtime->lookupFunction(0x1943B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738D0u; }
        if (ctx->pc != 0x3738D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__16CUserDataManagerFv_0x1943b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738D0u; }
        if (ctx->pc != 0x3738D0u) { return; }
    }
    ctx->pc = 0x3738D0u;
label_3738d0:
    // 0x3738d0: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x3738d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x3738d4: 0xc0c6a8c  jal         func_31AA30
    ctx->pc = 0x3738D4u;
    SET_GPR_U32(ctx, 31, 0x3738DCu);
    ctx->pc = 0x3738D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738D4u;
            // 0x3738d8: 0x24844250  addiu       $a0, $a0, 0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AA30u;
    if (runtime->hasFunction(0x31AA30u)) {
        auto targetFn = runtime->lookupFunction(0x31AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738DCu; }
        if (ctx->pc != 0x3738DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CQuestDataFv_0x31aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738DCu; }
        if (ctx->pc != 0x3738DCu) { return; }
    }
    ctx->pc = 0x3738DCu;
label_3738dc:
    // 0x3738dc: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x3738dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x3738e0: 0xc0bc4b4  jal         func_2F12D0
    ctx->pc = 0x3738E0u;
    SET_GPR_U32(ctx, 31, 0x3738E8u);
    ctx->pc = 0x3738E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738E0u;
            // 0x3738e4: 0x248458d0  addiu       $a0, $a0, 0x58D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F12D0u;
    if (runtime->hasFunction(0x2F12D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F12D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738E8u; }
        if (ctx->pc != 0x3738E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15CMenuSystemDataFv_0x2f12d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738E8u; }
        if (ctx->pc != 0x3738E8u) { return; }
    }
    ctx->pc = 0x3738E8u;
label_3738e8:
    // 0x3738e8: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x3738e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x3738ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x3738ECu;
    SET_GPR_U32(ctx, 31, 0x3738F4u);
    ctx->pc = 0x3738F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738ECu;
            // 0x3738f0: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738F4u; }
        if (ctx->pc != 0x3738F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738F4u; }
        if (ctx->pc != 0x3738F4u) { return; }
    }
    ctx->pc = 0x3738F4u;
label_3738f4:
    // 0x3738f4: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x3738f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x3738f8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x3738f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x3738fc: 0x248472b0  addiu       $a0, $a0, 0x72B0
    ctx->pc = 0x3738fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29360));
    // 0x373900: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x373900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
    // 0x373904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373908: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x373908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x37390c: 0xc040070  jal         func_1001C0
    ctx->pc = 0x37390Cu;
    SET_GPR_U32(ctx, 31, 0x373914u);
    ctx->pc = 0x373910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37390Cu;
            // 0x373910: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373914u; }
        if (ctx->pc != 0x373914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373914u; }
        if (ctx->pc != 0x373914u) { return; }
    }
    ctx->pc = 0x373914u;
label_373914:
    // 0x373914: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x373914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x373918: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x373918u;
    SET_GPR_U32(ctx, 31, 0x373920u);
    ctx->pc = 0x37391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373918u;
            // 0x37391c: 0x24847390  addiu       $a0, $a0, 0x7390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373920u; }
        if (ctx->pc != 0x373920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373920u; }
        if (ctx->pc != 0x373920u) { return; }
    }
    ctx->pc = 0x373920u;
label_373920:
    // 0x373920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x373924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373928: 0x3e00008  jr          $ra
    ctx->pc = 0x373928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373928u;
            // 0x37392c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373930u;
}
