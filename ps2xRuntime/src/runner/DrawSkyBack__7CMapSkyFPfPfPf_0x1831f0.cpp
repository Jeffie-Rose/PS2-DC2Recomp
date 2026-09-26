#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSkyBack__7CMapSkyFPfPfPf
// Address: 0x1831f0 - 0x1832ec
void DrawSkyBack__7CMapSkyFPfPfPf_0x1831f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSkyBack__7CMapSkyFPfPfPf_0x1831f0");
#endif

    switch (ctx->pc) {
        case 0x1831f0u: goto label_1831f0;
        case 0x1831f4u: goto label_1831f4;
        case 0x1831f8u: goto label_1831f8;
        case 0x1831fcu: goto label_1831fc;
        case 0x183200u: goto label_183200;
        case 0x183204u: goto label_183204;
        case 0x183208u: goto label_183208;
        case 0x18320cu: goto label_18320c;
        case 0x183210u: goto label_183210;
        case 0x183214u: goto label_183214;
        case 0x183218u: goto label_183218;
        case 0x18321cu: goto label_18321c;
        case 0x183220u: goto label_183220;
        case 0x183224u: goto label_183224;
        case 0x183228u: goto label_183228;
        case 0x18322cu: goto label_18322c;
        case 0x183230u: goto label_183230;
        case 0x183234u: goto label_183234;
        case 0x183238u: goto label_183238;
        case 0x18323cu: goto label_18323c;
        case 0x183240u: goto label_183240;
        case 0x183244u: goto label_183244;
        case 0x183248u: goto label_183248;
        case 0x18324cu: goto label_18324c;
        case 0x183250u: goto label_183250;
        case 0x183254u: goto label_183254;
        case 0x183258u: goto label_183258;
        case 0x18325cu: goto label_18325c;
        case 0x183260u: goto label_183260;
        case 0x183264u: goto label_183264;
        case 0x183268u: goto label_183268;
        case 0x18326cu: goto label_18326c;
        case 0x183270u: goto label_183270;
        case 0x183274u: goto label_183274;
        case 0x183278u: goto label_183278;
        case 0x18327cu: goto label_18327c;
        case 0x183280u: goto label_183280;
        case 0x183284u: goto label_183284;
        case 0x183288u: goto label_183288;
        case 0x18328cu: goto label_18328c;
        case 0x183290u: goto label_183290;
        case 0x183294u: goto label_183294;
        case 0x183298u: goto label_183298;
        case 0x18329cu: goto label_18329c;
        case 0x1832a0u: goto label_1832a0;
        case 0x1832a4u: goto label_1832a4;
        case 0x1832a8u: goto label_1832a8;
        case 0x1832acu: goto label_1832ac;
        case 0x1832b0u: goto label_1832b0;
        case 0x1832b4u: goto label_1832b4;
        case 0x1832b8u: goto label_1832b8;
        case 0x1832bcu: goto label_1832bc;
        case 0x1832c0u: goto label_1832c0;
        case 0x1832c4u: goto label_1832c4;
        case 0x1832c8u: goto label_1832c8;
        case 0x1832ccu: goto label_1832cc;
        case 0x1832d0u: goto label_1832d0;
        case 0x1832d4u: goto label_1832d4;
        case 0x1832d8u: goto label_1832d8;
        case 0x1832dcu: goto label_1832dc;
        case 0x1832e0u: goto label_1832e0;
        case 0x1832e4u: goto label_1832e4;
        case 0x1832e8u: goto label_1832e8;
        default: break;
    }

    ctx->pc = 0x1831f0u;

label_1831f0:
    // 0x1831f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1831f4:
    // 0x1831f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1831f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1831f8:
    // 0x1831f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1831f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1831fc:
    // 0x1831fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1831fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_183200:
    // 0x183200: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x183200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183204:
    // 0x183204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_183208:
    // 0x183208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18320c:
    // 0x18320c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18320cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183210:
    // 0x183210: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_183214:
    // 0x183214: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
label_183218:
    if (ctx->pc == 0x183218u) {
        ctx->pc = 0x183218u;
            // 0x183218: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18321Cu;
        goto label_18321c;
    }
    ctx->pc = 0x183214u;
    {
        const bool branch_taken_0x183214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183214u;
            // 0x183218: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183214) {
            ctx->pc = 0x1832D0u;
            goto label_1832d0;
        }
    }
    ctx->pc = 0x18321Cu;
label_18321c:
    // 0x18321c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18321cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183220:
    // 0x183220: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x183220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_183224:
    // 0x183224: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x183224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_183228:
    // 0x183228: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_18322c:
    // 0x18322c: 0x320f809  jalr        $t9
label_183230:
    if (ctx->pc == 0x183230u) {
        ctx->pc = 0x183230u;
            // 0x183230: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x183234u;
        goto label_183234;
    }
    ctx->pc = 0x18322Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x183234u);
        ctx->pc = 0x183230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18322Cu;
            // 0x183230: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x183234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183234u; }
            if (ctx->pc != 0x183234u) { return; }
        }
        }
    }
    ctx->pc = 0x183234u;
label_183234:
    // 0x183234: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x183234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_183238:
    // 0x183238: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_18323c:
    if (ctx->pc == 0x18323Cu) {
        ctx->pc = 0x18323Cu;
            // 0x18323c: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->pc = 0x183240u;
        goto label_183240;
    }
    ctx->pc = 0x183238u;
    {
        const bool branch_taken_0x183238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183238u;
            // 0x18323c: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183238) {
            ctx->pc = 0x183278u;
            goto label_183278;
        }
    }
    ctx->pc = 0x183240u;
label_183240:
    // 0x183240: 0xc04fbec  jal         func_13EFB0
label_183244:
    if (ctx->pc == 0x183244u) {
        ctx->pc = 0x183248u;
        goto label_183248;
    }
    ctx->pc = 0x183240u;
    SET_GPR_U32(ctx, 31, 0x183248u);
    ctx->pc = 0x13EFB0u;
    if (runtime->hasFunction(0x13EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x13EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183248u; }
        if (ctx->pc != 0x183248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__12mgCVisualMDTFPi_0x13efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183248u; }
        if (ctx->pc != 0x183248u) { return; }
    }
    ctx->pc = 0x183248u;
label_183248:
    // 0x183248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x183248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18324c:
    // 0x18324c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_183250:
    if (ctx->pc == 0x183250u) {
        ctx->pc = 0x183254u;
        goto label_183254;
    }
    ctx->pc = 0x18324Cu;
    {
        const bool branch_taken_0x18324c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18324c) {
            ctx->pc = 0x183278u;
            goto label_183278;
        }
    }
    ctx->pc = 0x183254u;
label_183254:
    // 0x183254: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x183254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_183258:
    // 0x183258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18325c:
    // 0x18325c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_183260:
    if (ctx->pc == 0x183260u) {
        ctx->pc = 0x183260u;
            // 0x183260: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183264u;
        goto label_183264;
    }
    ctx->pc = 0x18325Cu;
    {
        const bool branch_taken_0x18325c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x183260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18325Cu;
            // 0x183260: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18325c) {
            ctx->pc = 0x183278u;
            goto label_183278;
        }
    }
    ctx->pc = 0x183264u;
label_183264:
    // 0x183264: 0xc041c5c  jal         func_107170
label_183268:
    if (ctx->pc == 0x183268u) {
        ctx->pc = 0x183268u;
            // 0x183268: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x18326Cu;
        goto label_18326c;
    }
    ctx->pc = 0x183264u;
    SET_GPR_U32(ctx, 31, 0x18326Cu);
    ctx->pc = 0x183268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183264u;
            // 0x183268: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18326Cu; }
        if (ctx->pc != 0x18326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18326Cu; }
        if (ctx->pc != 0x18326Cu) { return; }
    }
    ctx->pc = 0x18326Cu;
label_18326c:
    // 0x18326c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18326cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183270:
    // 0x183270: 0xc041c5c  jal         func_107170
label_183274:
    if (ctx->pc == 0x183274u) {
        ctx->pc = 0x183274u;
            // 0x183274: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183278u;
        goto label_183278;
    }
    ctx->pc = 0x183270u;
    SET_GPR_U32(ctx, 31, 0x183278u);
    ctx->pc = 0x183274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183270u;
            // 0x183274: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183278u; }
        if (ctx->pc != 0x183278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183278u; }
        if (ctx->pc != 0x183278u) { return; }
    }
    ctx->pc = 0x183278u;
label_183278:
    // 0x183278: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x183278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_18327c:
    // 0x18327c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_183280:
    // 0x183280: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x183280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_183284:
    // 0x183284: 0x0  nop
    ctx->pc = 0x183284u;
    // NOP
label_183288:
    // 0x183288: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x183288u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18328c:
    // 0x18328c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18328cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183290:
    // 0x183290: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x183290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_183294:
    // 0x183294: 0x320f809  jalr        $t9
label_183298:
    if (ctx->pc == 0x183298u) {
        ctx->pc = 0x183298u;
            // 0x183298: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x18329Cu;
        goto label_18329c;
    }
    ctx->pc = 0x183294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18329Cu);
        ctx->pc = 0x183298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183294u;
            // 0x183298: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18329Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18329Cu; }
            if (ctx->pc != 0x18329Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18329Cu;
label_18329c:
    // 0x18329c: 0xc050bf4  jal         func_142FD0
label_1832a0:
    if (ctx->pc == 0x1832A0u) {
        ctx->pc = 0x1832A0u;
            // 0x1832a0: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x1832A4u;
        goto label_1832a4;
    }
    ctx->pc = 0x18329Cu;
    SET_GPR_U32(ctx, 31, 0x1832A4u);
    ctx->pc = 0x1832A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18329Cu;
            // 0x1832a0: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832A4u; }
        if (ctx->pc != 0x1832A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832A4u; }
        if (ctx->pc != 0x1832A4u) { return; }
    }
    ctx->pc = 0x1832A4u;
label_1832a4:
    // 0x1832a4: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x1832a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1832a8:
    // 0x1832a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1832ac:
    // 0x1832ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1832acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1832b0:
    // 0x1832b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1832b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1832b4:
    // 0x1832b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1832b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1832b8:
    // 0x1832b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1832b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1832bc:
    // 0x1832bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1832bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1832c0:
    // 0x1832c0: 0x320f809  jalr        $t9
label_1832c4:
    if (ctx->pc == 0x1832C4u) {
        ctx->pc = 0x1832C4u;
            // 0x1832c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1832C8u;
        goto label_1832c8;
    }
    ctx->pc = 0x1832C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1832C8u);
        ctx->pc = 0x1832C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832C0u;
            // 0x1832c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1832C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1832C8u; }
            if (ctx->pc != 0x1832C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1832C8u;
label_1832c8:
    // 0x1832c8: 0xc050bf4  jal         func_142FD0
label_1832cc:
    if (ctx->pc == 0x1832CCu) {
        ctx->pc = 0x1832CCu;
            // 0x1832cc: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x1832D0u;
        goto label_1832d0;
    }
    ctx->pc = 0x1832C8u;
    SET_GPR_U32(ctx, 31, 0x1832D0u);
    ctx->pc = 0x1832CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832C8u;
            // 0x1832cc: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832D0u; }
        if (ctx->pc != 0x1832D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832D0u; }
        if (ctx->pc != 0x1832D0u) { return; }
    }
    ctx->pc = 0x1832D0u;
label_1832d0:
    // 0x1832d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1832d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1832d4:
    // 0x1832d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1832d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1832d8:
    // 0x1832d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1832d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1832dc:
    // 0x1832dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1832dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1832e0:
    // 0x1832e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1832e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1832e4:
    // 0x1832e4: 0x3e00008  jr          $ra
label_1832e8:
    if (ctx->pc == 0x1832E8u) {
        ctx->pc = 0x1832E8u;
            // 0x1832e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1832ECu;
        goto label_fallthrough_0x1832e4;
    }
    ctx->pc = 0x1832E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832E4u;
            // 0x1832e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1832e4:
    ctx->pc = 0x1832ECu;
}
