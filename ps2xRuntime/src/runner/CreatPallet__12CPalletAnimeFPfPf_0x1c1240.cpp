#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatPallet__12CPalletAnimeFPfPf
// Address: 0x1c1240 - 0x1c1368
void CreatPallet__12CPalletAnimeFPfPf_0x1c1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPallet__12CPalletAnimeFPfPf_0x1c1240");
#endif

    switch (ctx->pc) {
        case 0x1c12d8u: goto label_1c12d8;
        default: break;
    }

    ctx->pc = 0x1c1240u;

    // 0x1c1240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c124c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c124cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c125c: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x1c125cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1c1260: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1260u;
    {
        const bool branch_taken_0x1c1260 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C1264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1260u;
            // 0x1c1264: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1260) {
            ctx->pc = 0x1C1270u;
            goto label_1c1270;
        }
    }
    ctx->pc = 0x1C1268u;
    // 0x1c1268: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C1268u;
    {
        const bool branch_taken_0x1c1268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C126Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1268u;
            // 0x1c126c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1268) {
            ctx->pc = 0x1C1350u;
            goto label_1c1350;
        }
    }
    ctx->pc = 0x1C1270u;
label_1c1270:
    // 0x1c1270: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x1c1270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1c1274: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1274u;
    {
        const bool branch_taken_0x1c1274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1274u;
            // 0x1c1278: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1274) {
            ctx->pc = 0x1C1280u;
            goto label_1c1280;
        }
    }
    ctx->pc = 0x1C127Cu;
    // 0x1c127c: 0x1cd  break       0, 7
    ctx->pc = 0x1c127cu;
    runtime->handleBreak(rdram, ctx);
label_1c1280:
    // 0x1c1280: 0x1812  mflo        $v1
    ctx->pc = 0x1c1280u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1c1284: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1284u;
    {
        const bool branch_taken_0x1c1284 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C1288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1284u;
            // 0x1c1288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1284) {
            ctx->pc = 0x1C1294u;
            goto label_1c1294;
        }
    }
    ctx->pc = 0x1C128Cu;
    // 0x1c128c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C128Cu;
    {
        const bool branch_taken_0x1c128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C128Cu;
            // 0x1c1290: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c128c) {
            ctx->pc = 0x1C1354u;
            goto label_1c1354;
        }
    }
    ctx->pc = 0x1C1294u;
label_1c1294:
    // 0x1c1294: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c1298: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1298u;
    {
        const bool branch_taken_0x1c1298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1298u;
            // 0x1c129c: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1298) {
            ctx->pc = 0x1C12A4u;
            goto label_1c12a4;
        }
    }
    ctx->pc = 0x1C12A0u;
    // 0x1c12a0: 0x1cd  break       0, 7
    ctx->pc = 0x1c12a0u;
    runtime->handleBreak(rdram, ctx);
label_1c12a4:
    // 0x1c12a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c12a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c12a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c12ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c12acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c12b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c12b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c12b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c12b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c12b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c12b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c12bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c12bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c12c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c12c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c12c4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1c12c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c12c8: 0x0  nop
    ctx->pc = 0x1c12c8u;
    // NOP
    // 0x1c12cc: 0x0  nop
    ctx->pc = 0x1c12ccu;
    // NOP
    // 0x1c12d0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C12D0u;
    SET_GPR_U32(ctx, 31, 0x1C12D8u);
    ctx->pc = 0x1C12D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12D0u;
            // 0x1c12d4: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12D8u; }
        if (ctx->pc != 0x1C12D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12D8u; }
        if (ctx->pc != 0x1C12D8u) { return; }
    }
    ctx->pc = 0x1C12D8u;
label_1c12d8:
    // 0x1c12d8: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1c12d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c12dc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1c12dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c12e0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1c12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1c12e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c12e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c12e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c12ec: 0x0  nop
    ctx->pc = 0x1c12ecu;
    // NOP
    // 0x1c12f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c12f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c12f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c12f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c12f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c12f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c12fc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c12fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c1300: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1c1300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c1304: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1c1304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1c1308: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1c1308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c130c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c130cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1310: 0x0  nop
    ctx->pc = 0x1c1310u;
    // NOP
    // 0x1c1314: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1318: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c1318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c131c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c131cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c1320: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c1320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c1324: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1c1324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1c1328: 0x86440004  lh          $a0, 0x4($s2)
    ctx->pc = 0x1c1328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c132c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1c132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1330: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c1330u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1334: 0x0  nop
    ctx->pc = 0x1c1334u;
    // NOP
    // 0x1c1338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c133c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c133cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c1340: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c1340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c1344: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c1344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c1348: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1c1348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1c134c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1c134cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1c1350:
    // 0x1c1350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1354:
    // 0x1c1354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c135c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c135cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1360: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1360u;
            // 0x1c1364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1368u;
}
