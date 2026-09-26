#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgBeginDrawShadow__FP10mgCTextureP10mgCTexture
// Address: 0x143190 - 0x1432cc
void mgBeginDrawShadow__FP10mgCTextureP10mgCTexture_0x143190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgBeginDrawShadow__FP10mgCTextureP10mgCTexture_0x143190");
#endif

    switch (ctx->pc) {
        case 0x143220u: goto label_143220;
        case 0x143228u: goto label_143228;
        case 0x143238u: goto label_143238;
        case 0x143244u: goto label_143244;
        case 0x143250u: goto label_143250;
        case 0x14325cu: goto label_14325c;
        case 0x143268u: goto label_143268;
        case 0x143274u: goto label_143274;
        case 0x14328cu: goto label_14328c;
        case 0x1432a0u: goto label_1432a0;
        case 0x1432b4u: goto label_1432b4;
        case 0x1432bcu: goto label_1432bc;
        default: break;
    }

    ctx->pc = 0x143190u;

    // 0x143190: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x143190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x143194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14319c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14319cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431a0: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1431A0u;
    {
        const bool branch_taken_0x1431a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431a0) {
            ctx->pc = 0x1432BCu;
            goto label_1432bc;
        }
    }
    ctx->pc = 0x1431A8u;
    // 0x1431a8: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1431ac: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1431acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1431b0: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1431B0u;
    {
        const bool branch_taken_0x1431b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1431B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431B0u;
            // 0x1431b4: 0x30a3003f  andi        $v1, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431b0) {
            ctx->pc = 0x1431C4u;
            goto label_1431c4;
        }
    }
    ctx->pc = 0x1431B8u;
    // 0x1431b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1431B8u;
    {
        const bool branch_taken_0x1431b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431b8) {
            ctx->pc = 0x1431C4u;
            goto label_1431c4;
        }
    }
    ctx->pc = 0x1431C0u;
    // 0x1431c0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1431c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1431c4:
    // 0x1431c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1431C4u;
    {
        const bool branch_taken_0x1431c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431C4u;
            // 0x1431c8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431c4) {
            ctx->pc = 0x1431D4u;
            goto label_1431d4;
        }
    }
    ctx->pc = 0x1431CCu;
    // 0x1431cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1431ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1431d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1431d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1431d4:
    // 0x1431d4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1431D4u;
    {
        const bool branch_taken_0x1431d4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1431D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431D4u;
            // 0x1431d8: 0x30c3003f  andi        $v1, $a2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431d4) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431DCu;
    // 0x1431dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1431DCu;
    {
        const bool branch_taken_0x1431dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431dc) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431E4u;
    // 0x1431e4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1431e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1431e8:
    // 0x1431e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1431E8u;
    {
        const bool branch_taken_0x1431e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431E8u;
            // 0x1431ec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431e8) {
            ctx->pc = 0x1431F8u;
            goto label_1431f8;
        }
    }
    ctx->pc = 0x1431F0u;
    // 0x1431f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1431f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1431f4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1431f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1431f8:
    // 0x1431f8: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x1431f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1431fc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1431fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x143200: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143200u;
    {
        const bool branch_taken_0x143200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x143204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143200u;
            // 0x143204: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143200) {
            ctx->pc = 0x143210u;
            goto label_143210;
        }
    }
    ctx->pc = 0x143208u;
    // 0x143208: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x143208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x14320c: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x14320cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_143210:
    // 0x143210: 0x9602003a  lhu         $v0, 0x3A($s0)
    ctx->pc = 0x143210u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x143214: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x143214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x143218: 0xc050f18  jal         func_143C60
    ctx->pc = 0x143218u;
    SET_GPR_U32(ctx, 31, 0x143220u);
    ctx->pc = 0x14321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143218u;
            // 0x14321c: 0x23ebe  dsrl32      $a3, $v0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143220u; }
        if (ctx->pc != 0x143220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143220u; }
        if (ctx->pc != 0x143220u) { return; }
    }
    ctx->pc = 0x143220u;
label_143220:
    // 0x143220: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x143220u;
    SET_GPR_U32(ctx, 31, 0x143228u);
    ctx->pc = 0x143224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143220u;
            // 0x143224: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143228u; }
        if (ctx->pc != 0x143228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143228u; }
        if (ctx->pc != 0x143228u) { return; }
    }
    ctx->pc = 0x143228u;
label_143228:
    // 0x143228: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14322c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143230: 0xc04d104  jal         func_134410
    ctx->pc = 0x143230u;
    SET_GPR_U32(ctx, 31, 0x143238u);
    ctx->pc = 0x143234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143230u;
            // 0x143234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143238u; }
        if (ctx->pc != 0x143238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143238u; }
        if (ctx->pc != 0x143238u) { return; }
    }
    ctx->pc = 0x143238u;
label_143238:
    // 0x143238: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14323c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x14323Cu;
    SET_GPR_U32(ctx, 31, 0x143244u);
    ctx->pc = 0x143240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14323Cu;
            // 0x143240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143244u; }
        if (ctx->pc != 0x143244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143244u; }
        if (ctx->pc != 0x143244u) { return; }
    }
    ctx->pc = 0x143244u;
label_143244:
    // 0x143244: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143248: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x143248u;
    SET_GPR_U32(ctx, 31, 0x143250u);
    ctx->pc = 0x14324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143248u;
            // 0x14324c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143250u; }
        if (ctx->pc != 0x143250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143250u; }
        if (ctx->pc != 0x143250u) { return; }
    }
    ctx->pc = 0x143250u;
label_143250:
    // 0x143250: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143254: 0xc04d424  jal         func_135090
    ctx->pc = 0x143254u;
    SET_GPR_U32(ctx, 31, 0x14325Cu);
    ctx->pc = 0x143258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143254u;
            // 0x143258: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14325Cu; }
        if (ctx->pc != 0x14325Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14325Cu; }
        if (ctx->pc != 0x14325Cu) { return; }
    }
    ctx->pc = 0x14325Cu;
label_14325c:
    // 0x14325c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143260: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x143260u;
    SET_GPR_U32(ctx, 31, 0x143268u);
    ctx->pc = 0x143264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143260u;
            // 0x143264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143268u; }
        if (ctx->pc != 0x143268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143268u; }
        if (ctx->pc != 0x143268u) { return; }
    }
    ctx->pc = 0x143268u;
label_143268:
    // 0x143268: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14326c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x14326Cu;
    SET_GPR_U32(ctx, 31, 0x143274u);
    ctx->pc = 0x143270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14326Cu;
            // 0x143270: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143274u; }
        if (ctx->pc != 0x143274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143274u; }
        if (ctx->pc != 0x143274u) { return; }
    }
    ctx->pc = 0x143274u;
label_143274:
    // 0x143274: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14327c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14327cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143284: 0xc04d320  jal         func_134C80
    ctx->pc = 0x143284u;
    SET_GPR_U32(ctx, 31, 0x14328Cu);
    ctx->pc = 0x143288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143284u;
            // 0x143288: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14328Cu; }
        if (ctx->pc != 0x14328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14328Cu; }
        if (ctx->pc != 0x14328Cu) { return; }
    }
    ctx->pc = 0x14328Cu;
label_14328c:
    // 0x14328c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143298: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x143298u;
    SET_GPR_U32(ctx, 31, 0x1432A0u);
    ctx->pc = 0x14329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143298u;
            // 0x14329c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432A0u; }
        if (ctx->pc != 0x1432A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432A0u; }
        if (ctx->pc != 0x1432A0u) { return; }
    }
    ctx->pc = 0x1432A0u;
label_1432a0:
    // 0x1432a0: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1432a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1432a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1432a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1432a8: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1432ac: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1432ACu;
    SET_GPR_U32(ctx, 31, 0x1432B4u);
    ctx->pc = 0x1432B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1432ACu;
            // 0x1432b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432B4u; }
        if (ctx->pc != 0x1432B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432B4u; }
        if (ctx->pc != 0x1432B4u) { return; }
    }
    ctx->pc = 0x1432B4u;
label_1432b4:
    // 0x1432b4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1432B4u;
    SET_GPR_U32(ctx, 31, 0x1432BCu);
    ctx->pc = 0x1432B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1432B4u;
            // 0x1432b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432BCu; }
        if (ctx->pc != 0x1432BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432BCu; }
        if (ctx->pc != 0x1432BCu) { return; }
    }
    ctx->pc = 0x1432BCu;
label_1432bc:
    // 0x1432bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1432bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1432c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1432c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1432c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1432C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1432C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432C4u;
            // 0x1432c8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1432CCu;
}
