#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__12mgCShadowMDTFP14mgCDrawManager
// Address: 0x13a560 - 0x13a738
void CreatePacket__12mgCShadowMDTFP14mgCDrawManager_0x13a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__12mgCShadowMDTFP14mgCDrawManager_0x13a560");
#endif

    switch (ctx->pc) {
        case 0x13a560u: goto label_13a560;
        case 0x13a564u: goto label_13a564;
        case 0x13a568u: goto label_13a568;
        case 0x13a56cu: goto label_13a56c;
        case 0x13a570u: goto label_13a570;
        case 0x13a574u: goto label_13a574;
        case 0x13a578u: goto label_13a578;
        case 0x13a57cu: goto label_13a57c;
        case 0x13a580u: goto label_13a580;
        case 0x13a584u: goto label_13a584;
        case 0x13a588u: goto label_13a588;
        case 0x13a58cu: goto label_13a58c;
        case 0x13a590u: goto label_13a590;
        case 0x13a594u: goto label_13a594;
        case 0x13a598u: goto label_13a598;
        case 0x13a59cu: goto label_13a59c;
        case 0x13a5a0u: goto label_13a5a0;
        case 0x13a5a4u: goto label_13a5a4;
        case 0x13a5a8u: goto label_13a5a8;
        case 0x13a5acu: goto label_13a5ac;
        case 0x13a5b0u: goto label_13a5b0;
        case 0x13a5b4u: goto label_13a5b4;
        case 0x13a5b8u: goto label_13a5b8;
        case 0x13a5bcu: goto label_13a5bc;
        case 0x13a5c0u: goto label_13a5c0;
        case 0x13a5c4u: goto label_13a5c4;
        case 0x13a5c8u: goto label_13a5c8;
        case 0x13a5ccu: goto label_13a5cc;
        case 0x13a5d0u: goto label_13a5d0;
        case 0x13a5d4u: goto label_13a5d4;
        case 0x13a5d8u: goto label_13a5d8;
        case 0x13a5dcu: goto label_13a5dc;
        case 0x13a5e0u: goto label_13a5e0;
        case 0x13a5e4u: goto label_13a5e4;
        case 0x13a5e8u: goto label_13a5e8;
        case 0x13a5ecu: goto label_13a5ec;
        case 0x13a5f0u: goto label_13a5f0;
        case 0x13a5f4u: goto label_13a5f4;
        case 0x13a5f8u: goto label_13a5f8;
        case 0x13a5fcu: goto label_13a5fc;
        case 0x13a600u: goto label_13a600;
        case 0x13a604u: goto label_13a604;
        case 0x13a608u: goto label_13a608;
        case 0x13a60cu: goto label_13a60c;
        case 0x13a610u: goto label_13a610;
        case 0x13a614u: goto label_13a614;
        case 0x13a618u: goto label_13a618;
        case 0x13a61cu: goto label_13a61c;
        case 0x13a620u: goto label_13a620;
        case 0x13a624u: goto label_13a624;
        case 0x13a628u: goto label_13a628;
        case 0x13a62cu: goto label_13a62c;
        case 0x13a630u: goto label_13a630;
        case 0x13a634u: goto label_13a634;
        case 0x13a638u: goto label_13a638;
        case 0x13a63cu: goto label_13a63c;
        case 0x13a640u: goto label_13a640;
        case 0x13a644u: goto label_13a644;
        case 0x13a648u: goto label_13a648;
        case 0x13a64cu: goto label_13a64c;
        case 0x13a650u: goto label_13a650;
        case 0x13a654u: goto label_13a654;
        case 0x13a658u: goto label_13a658;
        case 0x13a65cu: goto label_13a65c;
        case 0x13a660u: goto label_13a660;
        case 0x13a664u: goto label_13a664;
        case 0x13a668u: goto label_13a668;
        case 0x13a66cu: goto label_13a66c;
        case 0x13a670u: goto label_13a670;
        case 0x13a674u: goto label_13a674;
        case 0x13a678u: goto label_13a678;
        case 0x13a67cu: goto label_13a67c;
        case 0x13a680u: goto label_13a680;
        case 0x13a684u: goto label_13a684;
        case 0x13a688u: goto label_13a688;
        case 0x13a68cu: goto label_13a68c;
        case 0x13a690u: goto label_13a690;
        case 0x13a694u: goto label_13a694;
        case 0x13a698u: goto label_13a698;
        case 0x13a69cu: goto label_13a69c;
        case 0x13a6a0u: goto label_13a6a0;
        case 0x13a6a4u: goto label_13a6a4;
        case 0x13a6a8u: goto label_13a6a8;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6b0u: goto label_13a6b0;
        case 0x13a6b4u: goto label_13a6b4;
        case 0x13a6b8u: goto label_13a6b8;
        case 0x13a6bcu: goto label_13a6bc;
        case 0x13a6c0u: goto label_13a6c0;
        case 0x13a6c4u: goto label_13a6c4;
        case 0x13a6c8u: goto label_13a6c8;
        case 0x13a6ccu: goto label_13a6cc;
        case 0x13a6d0u: goto label_13a6d0;
        case 0x13a6d4u: goto label_13a6d4;
        case 0x13a6d8u: goto label_13a6d8;
        case 0x13a6dcu: goto label_13a6dc;
        case 0x13a6e0u: goto label_13a6e0;
        case 0x13a6e4u: goto label_13a6e4;
        case 0x13a6e8u: goto label_13a6e8;
        case 0x13a6ecu: goto label_13a6ec;
        case 0x13a6f0u: goto label_13a6f0;
        case 0x13a6f4u: goto label_13a6f4;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a6fcu: goto label_13a6fc;
        case 0x13a700u: goto label_13a700;
        case 0x13a704u: goto label_13a704;
        case 0x13a708u: goto label_13a708;
        case 0x13a70cu: goto label_13a70c;
        case 0x13a710u: goto label_13a710;
        case 0x13a714u: goto label_13a714;
        case 0x13a718u: goto label_13a718;
        case 0x13a71cu: goto label_13a71c;
        case 0x13a720u: goto label_13a720;
        case 0x13a724u: goto label_13a724;
        case 0x13a728u: goto label_13a728;
        case 0x13a72cu: goto label_13a72c;
        case 0x13a730u: goto label_13a730;
        case 0x13a734u: goto label_13a734;
        default: break;
    }

    ctx->pc = 0x13a560u;

label_13a560:
    // 0x13a560: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_13a564:
    // 0x13a564: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13a564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_13a568:
    // 0x13a568: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_13a56c:
    // 0x13a56c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13a56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_13a570:
    // 0x13a570: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13a570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13a574:
    // 0x13a574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13a578:
    // 0x13a578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13a57c:
    // 0x13a57c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13a580:
    // 0x13a580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13a584:
    // 0x13a584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13a588:
    // 0x13a588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13a58c:
    // 0x13a58c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13a58cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a590:
    // 0x13a590: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13a590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13a594:
    // 0x13a594: 0xc04fa08  jal         func_13E820
label_13a598:
    if (ctx->pc == 0x13A598u) {
        ctx->pc = 0x13A59Cu;
        goto label_13a59c;
    }
    ctx->pc = 0x13A594u;
    SET_GPR_U32(ctx, 31, 0x13A59Cu);
    ctx->pc = 0x13E820u;
    if (runtime->hasFunction(0x13E820u)) {
        auto targetFn = runtime->lookupFunction(0x13E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A59Cu; }
        if (ctx->pc != 0x13A59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureManager__9mgCVisualFv_0x13e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A59Cu; }
        if (ctx->pc != 0x13A59Cu) { return; }
    }
    ctx->pc = 0x13A59Cu;
label_13a59c:
    // 0x13a59c: 0x8eb00048  lw          $s0, 0x48($s5)
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_13a5a0:
    // 0x13a5a0: 0x8e3e005c  lw          $fp, 0x5C($s1)
    ctx->pc = 0x13a5a0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_13a5a4:
    // 0x13a5a4: 0x8e370060  lw          $s7, 0x60($s1)
    ctx->pc = 0x13a5a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_13a5a8:
    // 0x13a5a8: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x13a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_13a5ac:
    // 0x13a5ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13a5b0:
    // 0x13a5b0: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_13a5b4:
    // 0x13a5b4: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x13a5b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a5b8:
    // 0x13a5b8: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x13a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_13a5bc:
    // 0x13a5bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13a5c0:
    // 0x13a5c0: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x13a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_13a5c4:
    // 0x13a5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a5c8:
    // 0x13a5c8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_13a5cc:
    // 0x13a5cc: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13a5d0:
    // 0x13a5d0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x13a5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13a5d4:
    // 0x13a5d4: 0x10000034  b           . + 4 + (0x34 << 2)
label_13a5d8:
    if (ctx->pc == 0x13A5D8u) {
        ctx->pc = 0x13A5DCu;
        goto label_13a5dc;
    }
    ctx->pc = 0x13A5D4u;
    {
        const bool branch_taken_0x13a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a5d4) {
            ctx->pc = 0x13A6A8u;
            goto label_13a6a8;
        }
    }
    ctx->pc = 0x13A5DCu;
label_13a5dc:
    // 0x13a5dc: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x13a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_13a5e0:
    // 0x13a5e0: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x13a5e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13a5e4:
    // 0x13a5e4: 0x10000017  b           . + 4 + (0x17 << 2)
label_13a5e8:
    if (ctx->pc == 0x13A5E8u) {
        ctx->pc = 0x13A5ECu;
        goto label_13a5ec;
    }
    ctx->pc = 0x13A5E4u;
    {
        const bool branch_taken_0x13a5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a5e4) {
            ctx->pc = 0x13A644u;
            goto label_13a644;
        }
    }
    ctx->pc = 0x13A5ECu;
label_13a5ec:
    // 0x13a5ec: 0x0  nop
    ctx->pc = 0x13a5ecu;
    // NOP
label_13a5f0:
    // 0x13a5f0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x13a5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a5f4:
    // 0x13a5f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13a5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_13a5f8:
    // 0x13a5f8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_13a5fc:
    // 0x13a5fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x13a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_13a600:
    // 0x13a600: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x13a600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_13a604:
    // 0x13a604: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x13a604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_13a608:
    // 0x13a608: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x13a608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_13a60c:
    // 0x13a60c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_13a610:
    // 0x13a610: 0x2222825  or          $a1, $s1, $v0
    ctx->pc = 0x13a610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_13a614:
    // 0x13a614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13a618:
    // 0x13a618: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13a618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13a61c:
    // 0x13a61c: 0x8eb9001c  lw          $t9, 0x1C($s5)
    ctx->pc = 0x13a61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_13a620:
    // 0x13a620: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_13a624:
    // 0x13a624: 0x320f809  jalr        $t9
label_13a628:
    if (ctx->pc == 0x13A628u) {
        ctx->pc = 0x13A62Cu;
        goto label_13a62c;
    }
    ctx->pc = 0x13A624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13A62Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13A62Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13A62Cu; }
            if (ctx->pc != 0x13A62Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13A62Cu;
label_13a62c:
    // 0x13a62c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13a630:
    // 0x13a630: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x13a630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_13a634:
    // 0x13a634: 0x8e940010  lw          $s4, 0x10($s4)
    ctx->pc = 0x13a634u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_13a638:
    // 0x13a638: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13a63c:
    // 0x13a63c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13a640:
    // 0x13a640: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x13a640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_13a644:
    // 0x13a644: 0x0  nop
    ctx->pc = 0x13a644u;
    // NOP
label_13a648:
    // 0x13a648: 0x1680ffe8  bnez        $s4, . + 4 + (-0x18 << 2)
label_13a64c:
    if (ctx->pc == 0x13A64Cu) {
        ctx->pc = 0x13A650u;
        goto label_13a650;
    }
    ctx->pc = 0x13A648u;
    {
        const bool branch_taken_0x13a648 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a648) {
            ctx->pc = 0x13A5ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a5ec;
        }
    }
    ctx->pc = 0x13A650u;
label_13a650:
    // 0x13a650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a654:
    // 0x13a654: 0xc04f94c  jal         func_13E530
label_13a658:
    if (ctx->pc == 0x13A658u) {
        ctx->pc = 0x13A65Cu;
        goto label_13a65c;
    }
    ctx->pc = 0x13A654u;
    SET_GPR_U32(ctx, 31, 0x13A65Cu);
    ctx->pc = 0x13E530u;
    if (runtime->hasFunction(0x13E530u)) {
        auto targetFn = runtime->lookupFunction(0x13E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A65Cu; }
        if (ctx->pc != 0x13A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTexFlush_TagCnt__FPUi_0x13e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A65Cu; }
        if (ctx->pc != 0x13A65Cu) { return; }
    }
    ctx->pc = 0x13A65Cu;
label_13a65c:
    // 0x13a65c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13a660:
    // 0x13a660: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x13a660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13a664:
    // 0x13a664: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x13a664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a668:
    // 0x13a668: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13a668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_13a66c:
    // 0x13a66c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x13a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_13a670:
    // 0x13a670: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13a670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_13a674:
    // 0x13a674: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13a674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_13a678:
    // 0x13a678: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13a678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_13a67c:
    // 0x13a67c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_13a680:
    // 0x13a680: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13a684:
    // 0x13a684: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x13a684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13a688:
    // 0x13a688: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
label_13a68c:
    // 0x13a68c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_13a690:
    if (ctx->pc == 0x13A690u) {
        ctx->pc = 0x13A694u;
        goto label_13a694;
    }
    ctx->pc = 0x13A68Cu;
    {
        const bool branch_taken_0x13a68c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a68c) {
            ctx->pc = 0x13A69Cu;
            goto label_13a69c;
        }
    }
    ctx->pc = 0x13A694u;
label_13a694:
    // 0x13a694: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_13a698:
    // 0x13a698: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13a698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13a69c:
    // 0x13a69c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x13a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_13a6a0:
    // 0x13a6a0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x13a6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13a6a4:
    // 0x13a6a4: 0x0  nop
    ctx->pc = 0x13a6a4u;
    // NOP
label_13a6a8:
    // 0x13a6a8: 0x1600ffcc  bnez        $s0, . + 4 + (-0x34 << 2)
label_13a6ac:
    if (ctx->pc == 0x13A6ACu) {
        ctx->pc = 0x13A6B0u;
        goto label_13a6b0;
    }
    ctx->pc = 0x13A6A8u;
    {
        const bool branch_taken_0x13a6a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a6a8) {
            ctx->pc = 0x13A5DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a5dc;
        }
    }
    ctx->pc = 0x13A6B0u;
label_13a6b0:
    // 0x13a6b0: 0x2561023  subu        $v0, $s2, $s6
    ctx->pc = 0x13a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_13a6b4:
    // 0x13a6b4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13a6b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13a6b8:
    // 0x13a6b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_13a6bc:
    if (ctx->pc == 0x13A6BCu) {
        ctx->pc = 0x13A6C0u;
        goto label_13a6c0;
    }
    ctx->pc = 0x13A6B8u;
    {
        const bool branch_taken_0x13a6b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13a6b8) {
            ctx->pc = 0x13A6C8u;
            goto label_13a6c8;
        }
    }
    ctx->pc = 0x13A6C0u;
label_13a6c0:
    // 0x13a6c0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_13a6c4:
    // 0x13a6c4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13a6c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13a6c8:
    // 0x13a6c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13a6cc:
    // 0x13a6cc: 0xc04e748  jal         func_139D20
label_13a6d0:
    if (ctx->pc == 0x13A6D0u) {
        ctx->pc = 0x13A6D4u;
        goto label_13a6d4;
    }
    ctx->pc = 0x13A6CCu;
    SET_GPR_U32(ctx, 31, 0x13A6D4u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6D4u; }
        if (ctx->pc != 0x13A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6D4u; }
        if (ctx->pc != 0x13A6D4u) { return; }
    }
    ctx->pc = 0x13A6D4u;
label_13a6d4:
    // 0x13a6d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13a6d8:
    // 0x13a6d8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x13a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13a6dc:
    // 0x13a6dc: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13a6dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13a6e0:
    // 0x13a6e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_13a6e4:
    if (ctx->pc == 0x13A6E4u) {
        ctx->pc = 0x13A6E8u;
        goto label_13a6e8;
    }
    ctx->pc = 0x13A6E0u;
    {
        const bool branch_taken_0x13a6e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13a6e0) {
            ctx->pc = 0x13A6F0u;
            goto label_13a6f0;
        }
    }
    ctx->pc = 0x13A6E8u;
label_13a6e8:
    // 0x13a6e8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_13a6ec:
    // 0x13a6ec: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13a6ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13a6f0:
    // 0x13a6f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13a6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13a6f4:
    // 0x13a6f4: 0xc04e748  jal         func_139D20
label_13a6f8:
    if (ctx->pc == 0x13A6F8u) {
        ctx->pc = 0x13A6FCu;
        goto label_13a6fc;
    }
    ctx->pc = 0x13A6F4u;
    SET_GPR_U32(ctx, 31, 0x13A6FCu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6FCu; }
        if (ctx->pc != 0x13A6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A6FCu; }
        if (ctx->pc != 0x13A6FCu) { return; }
    }
    ctx->pc = 0x13A6FCu;
label_13a6fc:
    // 0x13a6fc: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x13a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
label_13a700:
    // 0x13a700: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
label_13a704:
    // 0x13a704: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13a704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_13a708:
    // 0x13a708: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13a708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13a70c:
    // 0x13a70c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13a70cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13a710:
    // 0x13a710: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13a710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13a714:
    // 0x13a714: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13a718:
    // 0x13a718: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13a71c:
    // 0x13a71c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13a720:
    // 0x13a720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13a724:
    // 0x13a724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a728:
    // 0x13a728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13a72c:
    // 0x13a72c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13a72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13a730:
    // 0x13a730: 0x3e00008  jr          $ra
label_13a734:
    if (ctx->pc == 0x13A734u) {
        ctx->pc = 0x13A738u;
        goto label_fallthrough_0x13a730;
    }
    ctx->pc = 0x13A730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13a730:
    ctx->pc = 0x13A738u;
}
