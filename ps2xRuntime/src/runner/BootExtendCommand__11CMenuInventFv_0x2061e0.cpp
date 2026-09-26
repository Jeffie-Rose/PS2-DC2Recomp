#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BootExtendCommand__11CMenuInventFv
// Address: 0x2061e0 - 0x206594
void BootExtendCommand__11CMenuInventFv_0x2061e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BootExtendCommand__11CMenuInventFv_0x2061e0");
#endif

    switch (ctx->pc) {
        case 0x206244u: goto label_206244;
        case 0x206254u: goto label_206254;
        case 0x206278u: goto label_206278;
        case 0x20628cu: goto label_20628c;
        case 0x20629cu: goto label_20629c;
        case 0x2062e0u: goto label_2062e0;
        case 0x206344u: goto label_206344;
        case 0x206354u: goto label_206354;
        case 0x2063b8u: goto label_2063b8;
        case 0x206470u: goto label_206470;
        case 0x206498u: goto label_206498;
        case 0x2064a8u: goto label_2064a8;
        case 0x2064b8u: goto label_2064b8;
        case 0x2064c8u: goto label_2064c8;
        case 0x2064dcu: goto label_2064dc;
        default: break;
    }

    ctx->pc = 0x2061e0u;

    // 0x2061e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2061e4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2061e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2061e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2061e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2061ec: 0x2442ef70  addiu       $v0, $v0, -0x1090
    ctx->pc = 0x2061ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x2061f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2061f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2061f4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2061f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2061f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2061f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2061fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2061fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x206200: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x206200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x206204: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x206208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20620c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206214: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x206214u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x206218: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x206218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20621c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20621cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x206220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x206224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206228: 0xaf829144  sw          $v0, -0x6EBC($gp)
    ctx->pc = 0x206228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938948), GPR_U32(ctx, 2));
    // 0x20622c: 0x8f829144  lw          $v0, -0x6EBC($gp)
    ctx->pc = 0x20622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
    // 0x206230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x206230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206234: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206234u;
    {
        const bool branch_taken_0x206234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206234u;
            // 0x206238: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206234) {
            ctx->pc = 0x20624Cu;
            goto label_20624c;
        }
    }
    ctx->pc = 0x20623Cu;
    // 0x20623c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x20623Cu;
    SET_GPR_U32(ctx, 31, 0x206244u);
    ctx->pc = 0x206240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20623Cu;
            // 0x206240: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206244u; }
        if (ctx->pc != 0x206244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206244u; }
        if (ctx->pc != 0x206244u) { return; }
    }
    ctx->pc = 0x206244u;
label_206244:
    // 0x206244: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x206244u;
    {
        const bool branch_taken_0x206244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206244u;
            // 0x206248: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206244) {
            ctx->pc = 0x206568u;
            goto label_206568;
        }
    }
    ctx->pc = 0x20624Cu;
label_20624c:
    // 0x20624c: 0xc0805ac  jal         func_2016B0
    ctx->pc = 0x20624Cu;
    SET_GPR_U32(ctx, 31, 0x206254u);
    ctx->pc = 0x2016B0u;
    if (runtime->hasFunction(0x2016B0u)) {
        auto targetFn = runtime->lookupFunction(0x2016B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206254u; }
        if (ctx->pc != 0x206254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectedPictInfo__11CMenuInventFv_0x2016b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206254u; }
        if (ctx->pc != 0x206254u) { return; }
    }
    ctx->pc = 0x206254u;
label_206254:
    // 0x206254: 0xaf829140  sw          $v0, -0x6EC0($gp)
    ctx->pc = 0x206254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938944), GPR_U32(ctx, 2));
    // 0x206258: 0x8f829140  lw          $v0, -0x6EC0($gp)
    ctx->pc = 0x206258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
    // 0x20625c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20625Cu;
    {
        const bool branch_taken_0x20625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20625Cu;
            // 0x206260: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20625c) {
            ctx->pc = 0x206270u;
            goto label_206270;
        }
    }
    ctx->pc = 0x206264u;
    // 0x206264: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x206264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206268u;
    {
        const bool branch_taken_0x206268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206268) {
            ctx->pc = 0x206280u;
            goto label_206280;
        }
    }
    ctx->pc = 0x206270u;
label_206270:
    // 0x206270: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206270u;
    SET_GPR_U32(ctx, 31, 0x206278u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206278u; }
        if (ctx->pc != 0x206278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206278u; }
        if (ctx->pc != 0x206278u) { return; }
    }
    ctx->pc = 0x206278u;
label_206278:
    // 0x206278: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x206278u;
    {
        const bool branch_taken_0x206278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206278) {
            ctx->pc = 0x206564u;
            goto label_206564;
        }
    }
    ctx->pc = 0x206280u;
label_206280:
    // 0x206280: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x206280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206284: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206284u;
    SET_GPR_U32(ctx, 31, 0x20628Cu);
    ctx->pc = 0x206288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206284u;
            // 0x206288: 0xaf809148  sw          $zero, -0x6EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20628Cu; }
        if (ctx->pc != 0x20628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20628Cu; }
        if (ctx->pc != 0x20628Cu) { return; }
    }
    ctx->pc = 0x20628Cu;
label_20628c:
    // 0x20628c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206290: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x206290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x206294: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x206294u;
    SET_GPR_U32(ctx, 31, 0x20629Cu);
    ctx->pc = 0x206298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206294u;
            // 0x206298: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20629Cu; }
        if (ctx->pc != 0x20629Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20629Cu; }
        if (ctx->pc != 0x20629Cu) { return; }
    }
    ctx->pc = 0x20629Cu;
label_20629c:
    // 0x20629c: 0xa7a00110  sh          $zero, 0x110($sp)
    ctx->pc = 0x20629cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x2062a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2062a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2062a4: 0x27a200a2  addiu       $v0, $sp, 0xA2
    ctx->pc = 0x2062a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 162));
    // 0x2062a8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2062a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2062ac: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2062acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2062b0: 0x2463cb30  addiu       $v1, $v1, -0x34D0
    ctx->pc = 0x2062b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953776));
    // 0x2062b4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2062b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2062b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2062b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2062bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2062c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062c4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2062c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2062c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2062d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2062d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2062d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2062d8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2062D8u;
    {
        const bool branch_taken_0x2062d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062D8u;
            // 0x2062dc: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062d8) {
            ctx->pc = 0x206448u;
            goto label_206448;
        }
    }
    ctx->pc = 0x2062E0u;
label_2062e0:
    // 0x2062e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2062e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2062e4: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x2062e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2062e8: 0x2402151a  addiu       $v0, $zero, 0x151A
    ctx->pc = 0x2062e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5402));
    // 0x2062ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2062ECu;
    {
        const bool branch_taken_0x2062ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2062F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062ECu;
            // 0x2062f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062ec) {
            ctx->pc = 0x206300u;
            goto label_206300;
        }
    }
    ctx->pc = 0x2062F4u;
    // 0x2062f4: 0x92820258  lbu         $v0, 0x258($s4)
    ctx->pc = 0x2062f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x2062f8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2062F8u;
    {
        const bool branch_taken_0x2062f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062f8) {
            ctx->pc = 0x206440u;
            goto label_206440;
        }
    }
    ctx->pc = 0x206300u;
label_206300:
    // 0x206300: 0x2dd1821  addu        $v1, $s6, $sp
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x206304: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x206304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206308: 0x247e00e8  addiu       $fp, $v1, 0xE8
    ctx->pc = 0x206308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
    // 0x20630c: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x20630cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x206310: 0x2402151d  addiu       $v0, $zero, 0x151D
    ctx->pc = 0x206310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5405));
    // 0x206314: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x206314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x206318: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206318u;
    {
        const bool branch_taken_0x206318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206318) {
            ctx->pc = 0x206338u;
            goto label_206338;
        }
    }
    ctx->pc = 0x206320u;
    // 0x206320: 0x8682060c  lh          $v0, 0x60C($s4)
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1548)));
    // 0x206324: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x206324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x206328: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206328u;
    {
        const bool branch_taken_0x206328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206328) {
            ctx->pc = 0x206338u;
            goto label_206338;
        }
    }
    ctx->pc = 0x206330u;
    // 0x206330: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x206330u;
    {
        const bool branch_taken_0x206330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206330u;
            // 0x206334: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206330) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x206338u;
label_206338:
    // 0x206338: 0x2402151a  addiu       $v0, $zero, 0x151A
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5402));
    // 0x20633c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20633Cu;
    {
        const bool branch_taken_0x20633c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20633Cu;
            // 0x206340: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20633c) {
            ctx->pc = 0x20639Cu;
            goto label_20639c;
        }
    }
    ctx->pc = 0x206344u;
label_206344:
    // 0x206344: 0x0  nop
    ctx->pc = 0x206344u;
    // NOP
    // 0x206348: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x206348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x20634c: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x20634Cu;
    SET_GPR_U32(ctx, 31, 0x206354u);
    ctx->pc = 0x206350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20634Cu;
            // 0x206350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206354u; }
        if (ctx->pc != 0x206354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206354u; }
        if (ctx->pc != 0x206354u) { return; }
    }
    ctx->pc = 0x206354u;
label_206354:
    // 0x206354: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206354u;
    {
        const bool branch_taken_0x206354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206354) {
            ctx->pc = 0x206374u;
            goto label_206374;
        }
    }
    ctx->pc = 0x20635Cu;
    // 0x20635c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x20635cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206360: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x206360u;
    {
        const bool branch_taken_0x206360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206360) {
            ctx->pc = 0x206374u;
            goto label_206374;
        }
    }
    ctx->pc = 0x206368u;
    // 0x206368: 0xaf829148  sw          $v0, -0x6EB8($gp)
    ctx->pc = 0x206368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938952), GPR_U32(ctx, 2));
    // 0x20636c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20636Cu;
    {
        const bool branch_taken_0x20636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20636Cu;
            // 0x206370: 0xaf91914c  sw          $s1, -0x6EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20636c) {
            ctx->pc = 0x206388u;
            goto label_206388;
        }
    }
    ctx->pc = 0x206374u;
label_206374:
    // 0x206374: 0x0  nop
    ctx->pc = 0x206374u;
    // NOP
    // 0x206378: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x206378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20637c: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x20637cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x206380: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x206380u;
    {
        const bool branch_taken_0x206380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206380) {
            ctx->pc = 0x206344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_206344;
        }
    }
    ctx->pc = 0x206388u;
label_206388:
    // 0x206388: 0x8f829148  lw          $v0, -0x6EB8($gp)
    ctx->pc = 0x206388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
    // 0x20638c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20638Cu;
    {
        const bool branch_taken_0x20638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20638c) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x206394u;
    // 0x206394: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x206394u;
    {
        const bool branch_taken_0x206394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206394u;
            // 0x206398: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206394) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x20639Cu;
label_20639c:
    // 0x20639c: 0x0  nop
    ctx->pc = 0x20639cu;
    // NOP
    // 0x2063a0: 0x2402151b  addiu       $v0, $zero, 0x151B
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5403));
    // 0x2063a4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2063A4u;
    {
        const bool branch_taken_0x2063a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2063a4) {
            ctx->pc = 0x2063D0u;
            goto label_2063d0;
        }
    }
    ctx->pc = 0x2063ACu;
    // 0x2063ac: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x2063acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x2063b0: 0xc07fac0  jal         func_1FEB00
    ctx->pc = 0x2063B0u;
    SET_GPR_U32(ctx, 31, 0x2063B8u);
    ctx->pc = 0x2063B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2063B0u;
            // 0x2063b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB00u;
    if (runtime->hasFunction(0x1FEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063B8u; }
        if (ctx->pc != 0x2063B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPhotoSpace__15CInventUserDataFPi_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063B8u; }
        if (ctx->pc != 0x2063B8u) { return; }
    }
    ctx->pc = 0x2063B8u;
label_2063b8:
    // 0x2063b8: 0xaf829148  sw          $v0, -0x6EB8($gp)
    ctx->pc = 0x2063b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938952), GPR_U32(ctx, 2));
    // 0x2063bc: 0x8f829148  lw          $v0, -0x6EB8($gp)
    ctx->pc = 0x2063bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
    // 0x2063c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2063C0u;
    {
        const bool branch_taken_0x2063c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2063c0) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x2063C8u;
    // 0x2063c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2063C8u;
    {
        const bool branch_taken_0x2063c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063C8u;
            // 0x2063cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063c8) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x2063D0u;
label_2063d0:
    // 0x2063d0: 0x2402151e  addiu       $v0, $zero, 0x151E
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5406));
    // 0x2063d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2063D4u;
    {
        const bool branch_taken_0x2063d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2063D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063D4u;
            // 0x2063d8: 0x2402151c  addiu       $v0, $zero, 0x151C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063d4) {
            ctx->pc = 0x2063E4u;
            goto label_2063e4;
        }
    }
    ctx->pc = 0x2063DCu;
    // 0x2063dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2063DCu;
    {
        const bool branch_taken_0x2063dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2063dc) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x2063E4u;
label_2063e4:
    // 0x2063e4: 0x0  nop
    ctx->pc = 0x2063e4u;
    // NOP
    // 0x2063e8: 0x8682060c  lh          $v0, 0x60C($s4)
    ctx->pc = 0x2063e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1548)));
    // 0x2063ec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2063ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2063f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2063F0u;
    {
        const bool branch_taken_0x2063f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2063f0) {
            ctx->pc = 0x2063FCu;
            goto label_2063fc;
        }
    }
    ctx->pc = 0x2063F8u;
    // 0x2063f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2063f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2063fc:
    // 0x2063fc: 0x0  nop
    ctx->pc = 0x2063fcu;
    // NOP
    // 0x206400: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206400u;
    {
        const bool branch_taken_0x206400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x206404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206400u;
            // 0x206404: 0x3c028020  lui         $v0, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206400) {
            ctx->pc = 0x20641Cu;
            goto label_20641c;
        }
    }
    ctx->pc = 0x206408u;
    // 0x206408: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x20640c: 0x34442020  ori         $a0, $v0, 0x2020
    ctx->pc = 0x20640cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x206410: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x206410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206414: 0xac6400c8  sw          $a0, 0xC8($v1)
    ctx->pc = 0x206414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 4));
    // 0x206418: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x206418u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
label_20641c:
    // 0x20641c: 0x0  nop
    ctx->pc = 0x20641cu;
    // NOP
    // 0x206420: 0x8f839144  lw          $v1, -0x6EBC($gp)
    ctx->pc = 0x206420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
    // 0x206424: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x206424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x206428: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x206428u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x20642c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x206430: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x206430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x206434: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x206434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x206438: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x206438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20643c: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x20643cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
label_206440:
    // 0x206440: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x206440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x206444: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_206448:
    // 0x206448: 0x8f839144  lw          $v1, -0x6EBC($gp)
    ctx->pc = 0x206448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
    // 0x20644c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x206450: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x206450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x206454: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x206454u;
    {
        const bool branch_taken_0x206454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206454u;
            // 0x206458: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206454) {
            ctx->pc = 0x2062E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2062e0;
        }
    }
    ctx->pc = 0x20645Cu;
    // 0x20645c: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x206460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206464: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x206464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x206468: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x206468u;
    SET_GPR_U32(ctx, 31, 0x206470u);
    ctx->pc = 0x20646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206468u;
            // 0x20646c: 0xa6350000  sh          $s5, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206470u; }
        if (ctx->pc != 0x206470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206470u; }
        if (ctx->pc != 0x206470u) { return; }
    }
    ctx->pc = 0x206470u;
label_206470:
    // 0x206470: 0x27a200a2  addiu       $v0, $sp, 0xA2
    ctx->pc = 0x206470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 162));
    // 0x206474: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x206478: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x206478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20647c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x206480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x206484: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x206484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x206488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20648c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206490: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x206490u;
    SET_GPR_U32(ctx, 31, 0x206498u);
    ctx->pc = 0x206494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206490u;
            // 0x206494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206498u; }
        if (ctx->pc != 0x206498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206498u; }
        if (ctx->pc != 0x206498u) { return; }
    }
    ctx->pc = 0x206498u;
label_206498:
    // 0x206498: 0x8f829144  lw          $v0, -0x6EBC($gp)
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
    // 0x20649c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2064a0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2064A0u;
    SET_GPR_U32(ctx, 31, 0x2064A8u);
    ctx->pc = 0x2064A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2064A0u;
            // 0x2064a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064A8u; }
        if (ctx->pc != 0x2064A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064A8u; }
        if (ctx->pc != 0x2064A8u) { return; }
    }
    ctx->pc = 0x2064A8u;
label_2064a8:
    // 0x2064a8: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x2064a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2064ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2064acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064b0: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x2064B0u;
    SET_GPR_U32(ctx, 31, 0x2064B8u);
    ctx->pc = 0x2064B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2064B0u;
            // 0x2064b4: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064B8u; }
        if (ctx->pc != 0x2064B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064B8u; }
        if (ctx->pc != 0x2064B8u) { return; }
    }
    ctx->pc = 0x2064B8u;
label_2064b8:
    // 0x2064b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2064b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2064bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064c0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2064C0u;
    SET_GPR_U32(ctx, 31, 0x2064C8u);
    ctx->pc = 0x2064C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2064C0u;
            // 0x2064c4: 0xae001b14  sw          $zero, 0x1B14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064C8u; }
        if (ctx->pc != 0x2064C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064C8u; }
        if (ctx->pc != 0x2064C8u) { return; }
    }
    ctx->pc = 0x2064C8u;
label_2064c8:
    // 0x2064c8: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x2064c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2064cc: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2064CCu;
    {
        const bool branch_taken_0x2064cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2064CCu;
            // 0x2064d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064cc) {
            ctx->pc = 0x20650Cu;
            goto label_20650c;
        }
    }
    ctx->pc = 0x2064D4u;
    // 0x2064d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2064d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2064d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2064dc:
    // 0x2064dc: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x2064dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2064e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2064E0u;
    {
        const bool branch_taken_0x2064e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2064E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2064E0u;
            // 0x2064e4: 0x846400e8  lh          $a0, 0xE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064e0) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2064E8u;
    // 0x2064e8: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x2064e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2064ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2064ECu;
    {
        const bool branch_taken_0x2064ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2064ECu;
            // 0x2064f0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064ec) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2064F4u;
    // 0x2064f4: 0xac641c84  sw          $a0, 0x1C84($v1)
    ctx->pc = 0x2064f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7300), GPR_U32(ctx, 4));
label_2064f8:
    // 0x2064f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2064fc: 0xb5182a  slt         $v1, $a1, $s5
    ctx->pc = 0x2064fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x206500: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x206500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x206504: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x206504u;
    {
        const bool branch_taken_0x206504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206504u;
            // 0x206508: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206504) {
            ctx->pc = 0x2064DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2064dc;
        }
    }
    ctx->pc = 0x20650Cu;
label_20650c:
    // 0x20650c: 0x0  nop
    ctx->pc = 0x20650cu;
    // NOP
    // 0x206510: 0x27a300a2  addiu       $v1, $sp, 0xA2
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 162));
    // 0x206514: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20651c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x20651cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x206520: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x206520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206524: 0x2463cb30  addiu       $v1, $v1, -0x34D0
    ctx->pc = 0x206524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953776));
    // 0x206528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20652c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206530: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x206530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x206534: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x206534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x206538: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x20653c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20653Cu;
    {
        const bool branch_taken_0x20653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20653c) {
            ctx->pc = 0x206548u;
            goto label_206548;
        }
    }
    ctx->pc = 0x206544u;
    // 0x206544: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x206544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_206548:
    // 0x206548: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x206548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20654c: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x20654cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x206550: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x206550u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x206554: 0x8f839140  lw          $v1, -0x6EC0($gp)
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
    // 0x206558: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x206558u;
    {
        const bool branch_taken_0x206558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206558) {
            ctx->pc = 0x206564u;
            goto label_206564;
        }
    }
    ctx->pc = 0x206560u;
    // 0x206560: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x206560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_206564:
    // 0x206564: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x206564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_206568:
    // 0x206568: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x206568u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20656c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20656cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206570: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x206570u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206574: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x206574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x206578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20657c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20657cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x206580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20658c: 0x3e00008  jr          $ra
    ctx->pc = 0x20658Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20658Cu;
            // 0x206590: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206594u;
}
